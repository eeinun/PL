%{
    #include <stdio.h>
    int preprocessor = 0;
    int octal_number = 0;
    int negative_decimal_number = 0;
    int positive_deciaml_number = 0;
    int operator = 0;
    int comment = 0;
    int assign = 0;
    int bracelet_open = 0;
    int bracelet_close = 0;
    int wordcase_1 = 0; // pp가 들어간 단어
    int wordcase_2 = 0; // e - - - m
    int word = 0; // 나머지 단어 개수
    int mark = 0; // 그외
%}

%%
\/[*]([^*]|([*][^\/]))*[*]\/ {comment++;/*printf("%s\n", yytext);*/}
\/\/.*\n {comment++;}
#(define|include) {preprocessor++;}
0[0-9]+ {octal_number++;}
-[0-9]+ {negative_decimal_number++;}
[0-9]+  {positive_deciaml_number++;}
\{      {bracelet_open++;}
\}      {bracelet_close++;}
([\+\-\*\/,\&<>|]|\+\+|\-\-|\=\=|<\=|>\=|\&\&|\|\||~|\^|!|!\=)    {operator++;}
\=      {assign++;}
[^pP]*p[^pP]*p[^pP]    {wordcase_1++;/*printf("pp:%s\n", yytext);*/}
e[a-zA-Z_]*m    {wordcase_2++;/*printf("em:%s\n", yytext);*/}
[a-zA-Z_]+       {word++;/*printf("wd:%s\n", yytext);*/}
.|\n    {mark++;}
%%

int main()
{
    yylex();
    printf("preprocessor = %d\n", preprocessor);
    printf("octal number = %d\n", octal_number);
    printf("negative_decimal_number = %d\n", negative_decimal_number );
    printf("positive_deciaml_number = %d\n",positive_deciaml_number);
    printf("operator = %d\n",operator);
    printf("comment = %d\n", comment);
    printf("'=' = %d\n", assign);
    printf("'{' = %d\n", bracelet_open);
    printf("'}' = %d\n",bracelet_close);
    printf("wordcase_1 = %d\n", wordcase_1);
    printf("wordcase_2 = %d\n", wordcase_2);
    printf("word = %d\n", word);
    printf("mark = %d\n", mark);
    return 0;
}

int yywrap()
{
    return 1;
}