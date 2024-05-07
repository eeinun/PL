%{
    #include <stdio.h>
    int digicount = 0;
%}

%%
999         {printf("%s is appreared\n", yytext);}
([0-9])+    {digicount++;}
\n;
%%

int main() {
    yylex();
    printf("digicount : %d\n", digicount);
    return 0;
}

int yywrap() {
    return 1;
}