%{
   #include "y.tab.h"
%}

%%

\[([0-9]+)([ ]*,[ ]*[0-9]+)*\] {yylval.list = strdup(yytext); return LIST;};
\"(?:[^"\\]|\\.)*\" {yylval.string = strdup(yytext); return STRING;};
['][a-zA-Z0-9\.><,;:!@#$%^&*()]['] {yylval.string = strdup(yytext); return CAR;};
"print" return PRINT;
"sort" return SORT;
"remove_duplicates" return REM_DUP;
"while" return WHILE;
"for" return FOR;
"if" return IF;
"size" return SIZE;
"then" return THEN;
"else" return ELSE;
[<>] {	yylval.name = yytext[0];
		return COND;}
"==" {	yylval.string = strdup(yytext);
		return COND;}
[=] return EGAL;
[+\-*/] return yytext[0];
[";()\n\s.\[\],] return *yytext;
[0-9]+ {	yylval.nr = atoi(yytext);
		return NUMBER;}
[a-zA-Z] {yylval.name = yytext[0]; return VAR;}
. ;
%%

int yywrap(void) {
return 1;
}
