%{
    #include <stdio.h>
    int cnt = 0;
%}

%%
(?-i:love) {cnt++;}
.|\n ;
%%

int main()
{
    yylex();
    printf("number of love=%d\n", cnt);
    return 0;
}

int yywrap()
{
    return 1;
}