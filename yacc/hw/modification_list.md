# Added
- preprocessor
    - lex
    "#include"			    { return INCLUDE_PP; }
    "#define"			    { return DEFINE_PP; }
    \<[^\>]*\>\n			{ return STDLIB; }
    - yacc
%token INCLUDE_PP DEFINE_PP STDLIB
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
    : function_definition
    | preprocessor_declaration
    | declaration
    ;

- array
direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

direct_array_declarator
	: direct_declarator
	| direct_array_declarator '[' constant_expression ']'
	| direct_array_declarator '[' ']'
	;