%{
    #include <stdio.h>
    #define YYDEBUG 1
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
%start translation_unit

%%  
translation_unit : integer_declaration
                 | character_declaration
                 ;
integer_declaration : INT declaration_list ';'
                    ;
declaration_list : declaration_list ',' declaration
                 | declaration
                 ;
declaration : IDENTIFIER '=' CONSTANT {_int++;}
            | IDENTIFIER {_int++;}

character_declaration : CHAR declaration_list ';' {_char++;}
                      ;
%%

int main(void) {
    yyparse();
    
    printf("function = %d\n", function);
    printf("operation = %d\n", operation);
    printf("int = %d\n", _int);
    printf("char = %d\n", _char);
    printf("pointer = %d\n", pointer);
    printf("array = %d\n", array);
    printf("selection = %d\n", selection);
    printf("loop = %d\n", loop);
    printf("return = %d\n", _return);

    return 0;
}

void yyerror(const char* str) {
    fprintf(stderr, "error : %s\n", str);
}