%{
    #include <stdio.h>
    #define YYDEBUG 1
    void yyerror(const char* str);
    int yylex();
    int function = 0;
    int operation = 0;
    int _int = 0;
    int _char = 0;
    int pointer = 0;
    int array = 0;
    int selection = 0;
    int loop = 0;
    int _return = 0;
	int __init_dcl_counter = 0;
	int debug___ = 0;
%}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%token INCLUDE_PP DEFINE_PP STDLIB
%token	TYPEDEF_NAME ENUMERATION_CONSTANT


%start translation_unit
%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')' { function++; }
	| postfix_expression '(' argument_expression_list ')' { function++; }
	| postfix_expression '.' IDENTIFIER { operation++; }
	| postfix_expression PTR_OP IDENTIFIER { operation++; }
	| postfix_expression INC_OP { operation++; }
	| postfix_expression DEC_OP { operation++; }
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression { operation++; }
	| DEC_OP unary_expression { operation++; }
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression  { operation++; }
	;

multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression { operation++; }
	| multiplicative_expression '/' cast_expression { operation++; }
	| multiplicative_expression '%' cast_expression { operation++; }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression { operation++; }
	| additive_expression '-' multiplicative_expression { operation++; }
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression { operation++; }
	| shift_expression RIGHT_OP additive_expression { operation++; }
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression { operation++; }
	| relational_expression '>' shift_expression { operation++; }
	| relational_expression LE_OP shift_expression { operation++; }
	| relational_expression GE_OP shift_expression { operation++; }
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression { operation++; }
	| equality_expression NE_OP relational_expression { operation++; }
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression { operation++; }
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression { operation++; }
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression { operation++; }
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression { operation++; }
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression { operation++; }
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression { operation++; }
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';' { __init_dcl_counter = 0;}
	| integer_declaration_specifiers init_declarator_list ';' { _int += __init_dcl_counter; __init_dcl_counter = 0;}
	| character_declaration_specifiers init_declarator_list ';' { _char += __init_dcl_counter; __init_dcl_counter = 0;}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;



init_declarator_list
	: init_declarator { __init_dcl_counter++; }
	| init_declarator_list ',' init_declarator { __init_dcl_counter++; }
	;

init_declarator
	: declarator
	| declarator '=' initializer { operation++; }
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| SHORT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	| TYPEDEF_NAME
	;

integer_type_specifier
	: INT
	;

character_type_specifier
	: CHAR
	;

integer_declaration_specifiers
	: storage_class_specifier integer_declaration_specifiers
	| type_specifier integer_declaration_specifiers
	| integer_type_specifier
	;

character_declaration_specifiers
	: storage_class_specifier character_declaration_specifiers
	| type_specifier character_declaration_specifiers
	| character_type_specifier
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list ';'
	| specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| integer_type_specifier specifier_qualifier_list
	| integer_type_specifier
	| character_type_specifier specifier_qualifier_list
	| character_type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator { pointer++; }
	| direct_declarator
	| direct_array_declarator { array++; }
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

direct_array_declarator
	: IDENTIFIER '[' constant_expression ']'
	| IDENTIFIER '[' ']'
	| direct_array_declarator '[' constant_expression ']'
	| direct_array_declarator '[' ']'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| integer_declaration_specifiers declarator { _int++; }
	| character_declaration_specifiers declarator { _char++; }
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer { pointer++; }
	| direct_abstract_declarator
	| pointer direct_abstract_declarator { pointer++; }
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement { selection++; }
	| iteration_statement { loop++; }
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' list_of_list '}'
	;

list_of_list
	: code_block_list
	| list_of_list code_block_list
	;

code_block_list
	: declaration
	| statement
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	| FOR '(' declaration expression_statement ')' statement
	| FOR '(' declaration expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';' { _return++; }
	| RETURN expression ';' { _return++; }
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

preprocessor_declaration
    : include_preprocessor
    | define_preprocessor
    ;

include_preprocessor
    : INCLUDE_PP STRING_LITERAL
    | INCLUDE_PP STDLIB
    ;

define_preprocessor
    : DEFINE_PP IDENTIFIER CONSTANT

external_declaration
	: function_definition { function++; }
	| preprocessor_declaration { debug___++;}
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| integer_declaration_specifiers declarator declaration_list compound_statement
	| integer_declaration_specifiers declarator compound_statement
	| character_declaration_specifiers declarator declaration_list compound_statement
	| character_declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%
#include <stdio.h>

extern char yytext[];
extern int column;

int main(void) {
	yydebug = 1;
    yyparse();
    
    printf("\nfunction = %d\n", function);
    printf("operation = %d\n", operation);
    printf("int = %d\n", _int);
    printf("char = %d\n", _char);
    printf("pointer = %d\n", pointer);
    printf("array = %d\n", array);
    printf("selection = %d\n", selection);
    printf("loop = %d\n", loop);
    printf("return = %d\n", _return);
    printf("debug___ = %d\n", debug___);

    return 0;
}

void yyerror(const char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}