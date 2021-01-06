%token <name> VAR COND
%token <nr> NUMBER
%token <string> STRING CAR 
%token <list> LIST
%token EGAL PRINT IF THEN ELSE WHILE FOR SIZE SORT REM_DUP

%start program

%type <name> asign
%type <nr> oper1 exp  ope
%type <list> oper2
%type <string> oper3
%type <num> condition
%type <node> statement

%left '+''-'
%left '*''/'


%{
    void yyerror(char *s);
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int xx=0;
	int cond[100];
	int h = 0;
	typedef struct{
		float nr;
		float* list;
		int listSize;
		char* str;
	}variabila;
	variabila names[52] = {0};
	int zz;
	float symbolVal(char symbol);
	int fractia(int x);
	void afisMesaj(char *s);
	void updateSymbolVal(char symbol, float val);
	void updateSymbolList(char symbol, char* list);
	void updateSymbolString(char symbol, char* string);
	void printAssign(char symbol);
	void printVariable(char symbol); 
	void updateSymbolList1(char symbol, int nr, int val);
	void updateSymbolString1(char symbol, int nr, char* val);
	float symbolListElement(char symbol, char* n);
	void while_function(int a,char cond, int b,char var, int c);
	void for_function(float a,float cond, float b,float c,char var,char var1, float d,float e,char ala);
	void for_function_print(float a,float cond, float b,float c,char ala,char pr);
	float* symbolList(char symbol);
	char* symbolString(char symbol);
	int symbolListSize(char symbol);
	int computeSymbolIndex(char token);
	void sortList(char symbol);
	void removeDuplicates(char symbol);
	
%}

%union{ char name;
	float nr;
	int num;
	char* string;
	char* list;
	struct node{
        float type;
        char value;
    }node ;
	}	
	
%%
program : program act '\n'
		|
		;

act : asign { printAssign($1); }
	|print_st
	| if_statement    
	|WHILE '(' exp COND exp ')' VAR EGAL exp {		if ($4 == '>')
													{  
														while_function($3,'>',$5,$7,$9);
													} 
													else if ($4 == '<')
														{
															while_function($3,'<',$5,$7,$9);;
														}
													else
														{
															while_function($3,'=',$5,$7,$9);
														}
	
											 }
	|FOR '(' VAR EGAL exp ';' VAR COND exp ';' VAR EGAL VAR '+' NUMBER ')' VAR EGAL VAR ope exp{
													if ($8 == '<')
														{
															for_function($5,'<',$9,$15,$17,$19,$20,$21,$3);
														}}
	|FOR '(' VAR EGAL exp ';' VAR COND exp ';' VAR EGAL VAR '-' NUMBER ')' VAR EGAL VAR ope exp{if ($8 == '>')
													{  
														for_function($5,'<',$9,$15,$17,$19,$20,$21,$3);
													} }
	|FOR '(' VAR EGAL exp ';' VAR COND exp ';' VAR EGAL VAR '+' NUMBER ')' PRINT '(' VAR ')'{
												
															for_function_print($5,'<',$9,$15,$3,$19);
														}
	|FOR '(' VAR EGAL exp ';' VAR COND exp ';' VAR EGAL VAR '-' NUMBER ')' PRINT '(' VAR ')'{ 
														for_function_print($5,'>',$9,$15,$3,$19);
													 }
	|FOR '(' VAR EGAL exp ';' VAR COND exp ';' VAR EGAL VAR '+' NUMBER ')' PRINT '(' exp ')'{
												
															for(int i=$5;i<$9;i+=$15){
															if(zz == 1) printf("%c\n",(char)$19);
																else printf("%.2f\n",$19);
																zz = 0;}
															}
														
	|FOR '(' VAR EGAL exp ';' VAR COND exp ';' VAR EGAL VAR '-' NUMBER ')' PRINT '(' exp ')'{ 
														for(int i=$5;i>$9;i-=$15){
															if(zz == 1) printf("%c\n",(char)$19);
																else printf("%.2f\n",$19);
																zz = 0;}
															}
	|FOR '(' VAR EGAL exp ';' VAR COND SIZE '(' VAR ')' ';' VAR EGAL VAR '+' NUMBER ')' PRINT '(' VAR '[' VAR ']' ')'{
															
															if(NULL != symbolList($11)){
															for(int i=$5;i<symbolListSize($11);i+=$18){
															    updateSymbolVal($24,i);
																int x = symbolVal($24);
																int bucket = computeSymbolIndex($22);
																float la = names[bucket].list[x];
																printf("%.2f\n",la);
																}
															}
															else printf("%c nu este o lista\n",$11);
															}
														
	|FOR '(' VAR EGAL SIZE '(' VAR ')' ';' VAR COND exp ';' VAR EGAL VAR '-' NUMBER ')' PRINT '(' VAR '[' VAR ']' ')'{ 
														
														if(NULL != symbolList($7)){
															for(int i=symbolListSize($7);i>$12;i-=$18){
															 updateSymbolVal($24,i);
																int x = symbolVal($24);
																int bucket = computeSymbolIndex($22);
																float la = names[bucket].list[x];
																printf("%.2f\n",la);
																}
															}
															else printf("%c nu este o lista\n",$11);
															}
	|FOR '(' VAR EGAL exp ';' VAR COND SIZE '(' VAR ')' ';' VAR EGAL VAR '+' NUMBER ')' PRINT '(' exp ')'{
															
															if(NULL != symbolList($11)){
															for(int i=$5;i<symbolListSize($11);i+=$18){
															if(zz == 1) printf("%c\n",(char)$22);
																else printf("%.2f\n",$22);
																zz = 0;}
															}
															else printf("%c nu este o lista\n",$11);
															}
														
	|FOR '(' VAR EGAL SIZE '(' VAR ')' ';' VAR COND exp ';' VAR EGAL VAR '-' NUMBER ')' PRINT '(' exp ')'{ 
														
														if(NULL != symbolList($7)){
															for(int i=symbolListSize($7);i>$12;i-=$18){
															if(zz == 1) printf("%c\n",(char)$22);
																else printf("%.2f\n",$22);
																zz = 0;}
															}
															else printf("%c nu este o lista\n",$11);
															}
	| SORT '(' VAR ')' { sortList($3); }
	| REM_DUP '(' VAR ')' { removeDuplicates($3); }

													 													 
print_st : PRINT '(' VAR ')' { printVariable($3);}
		 | PRINT '(' exp ')' { if(zz == 1) printf("%c\n",(char)$3);
							else printf("%.2f\n",$3);
							zz = 0;}
		 | PRINT '(' STRING ',' VAR ')' { char *s; s = $3;
										afisMesaj(s);
										printVariable($5);}
		 | PRINT '(' STRING ',' exp ')' { char *s; s = $3;
										afisMesaj(s);
										printf(" %.2f \n",$5);}
		 | PRINT '(' STRING ')' { char *s; s = $3;
										afisMesaj(s);
										printf("\n");
										}
		 ;

ope : '+' {$$ = 0;}
	| '-' {$$ = 1;}
	| '*' {$$ = 2;}
	| '/' {$$ = 3;}
	;

if_statement : IF condition THEN statement  {if($2 == 1){ updateSymbolVal($4.value,$4.type);
															printf("val lui %c este acuma %.2f\n",$4.value,$4.type);}
											else printf("conditie neindeplinita\n");}
             | IF condition THEN statement ELSE statement {if($2 == 1){ updateSymbolVal($4.value,$4.type);
															printf("val lui %c este acuma %.2f\n",$4.value,$4.type);}
											else { updateSymbolVal($6.value,$6.type);
															printf("val lui %c este acuma %.2f\n",$6.value,$6.type);}}
             ;

statement: VAR EGAL exp {
						  $$.type = $3;
						  $$.value = $1;
						   }
         | if_statement 
         ;

condition : '(' exp COND exp ')' {if ($3 == '>')
									{  if($2 > $4)
										{ $$ = 1;}
										else $$ = 0;} 
									else if ($3 == '<')
											{if ($2 > $4)
												{ $$ = 0;} 
											else $$ = 1;}
									else if($2 == $4) 
											$$ = 1; 
										else $$ = 0;}

		  
		   

asign : VAR EGAL exp {updateSymbolVal($1, $3); 
					$$ = $1;}
	| VAR EGAL oper2 {updateSymbolList($1, $3);
					$$ = $1;}
	| VAR EGAL oper3 {updateSymbolString($1, $3);
					$$ = $1;}
	| VAR LIST EGAL exp {char* n = $2;
						 char nr1[10];
						 strncpy(nr1,n+1,strlen(n)-2);
						 int nr = atoi(nr1);
						 updateSymbolList1($1, nr, $4);
					$$ = $1;
						 }
	| VAR LIST EGAL CAR {char* n = $2;
						 char nr1[10];
						 strncpy(nr1,n+1,strlen(n)-2);
						 int nr = atoi(nr1);
						 updateSymbolString1($1, nr, $4);
					$$ = $1;
						 }
					
exp : oper1 {$$ = $1;}
	| '-' oper1 {$$ = -($2);}
	| exp '+' exp {$$ = $1 + $3;}
	| exp '-' exp {$$ = $1 - $3;}
	| exp '*' exp {$$ = $1 * $3;}
	| exp '/' exp {$$ = $1 / $3;}
	| '(' exp ')' { $$ = $2; }
	| SIZE '(' VAR ')' {if(NULL != symbolList($3))
						   $$ = symbolListSize($3);
						else printf("%c nu este o lista \n",$3);}
	;
	
oper1 : VAR LIST { $$ = symbolListElement($1, $2);
					
					}
	  | VAR {
			$$ = symbolVal($1);}
      | NUMBER {$$ = $1;}
	  | NUMBER '.' NUMBER {$$ = $1 + $3/fractia($3);}
      ;

oper2 : LIST {$$ = $1;}
	;
oper3 : STRING {$$ = $1;}
	;
		
%%

void for_function(float a,float cond, float b,float c,char var,char var1, float d,float e,char ala){
//var = var1 op e   cu ala parcurg forul

if (cond == '>')
				{  
					if(a<=b) printf("imposibil \n");
					else
					{
						for(float i=a;i>b;i-=c){
							updateSymbolVal(ala,i);
							float l = symbolVal(var);
							float l1 = symbolVal(var1);
							if(d == 0){
								l1 +=e;
								printf("adun\n");
								}
							if(d == 1){
								l1 -=e;
								printf("scad\n");
								}
							if(d == 2){
								l1 *=e;
								printf("ori\n");
								}
							if(d == 3){
								l1 /=e;
								printf("supra\n");
								}
							updateSymbolVal(var,l1);	
						}
					}
				} 
				else if (cond == '<')
					{
						if(a>=b) printf("imposibil \n");
						else
						{
							for(float i=a;i<b;i+=c){
							updateSymbolVal(ala,i);
							float l = symbolVal(var);
							float l1 = symbolVal(var1);
							if(d == 0){
								l1 +=e;
								}
							if(d == 1){
								l1 -=e;
								}
							if(d == 2){
								l1 *=e;
								}
							if(d == 3){
								l1 /=e;
								}
							updateSymbolVal(var,l1);	
							}
						}
					}		
}

void for_function_print(float a,float cond, float b,float c,char ala,char pr){
if (cond == '>')
				{  
					if(a<=b) printf("inposibil \n");
					else
					{
						for(float i=a;i>b;i-=c){
						updateSymbolVal(ala,i);	
							printVariable(pr);
						}
					}
				} 
				else if (cond == '<')
					{
						if(a>=b) printf("inposibil \n");
						else
						{
							for(float i=a;i<b;i+=c){
							updateSymbolVal(ala,i);	
							printVariable(pr);
							}
						}
					}		
}


void while_function(int a,char cond, int b,char var, int c){
		if (cond == '>')
				{  
					printf("this is s while statement\n");
				} 
					else if (cond == '<')
						{
							printf("this is s while statement\n");
						}
				else if (cond == '=')
				{
					printf("this is s while statement\n");
				}
}

void afisMesaj(char* s){
	for(int i=1;i<strlen(s)-1;i++)
		printf("%c",s[i]);
}

int fractia(int x){
	int res = 1;
	while(x!=0){
		x/=10;
		res=10;
	}
	return res;
}

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 



float symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].nr;
}

char* symbolString(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].str;
}

float* symbolList(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].list;
}

float symbolListElement(char symbol, char* n)
{
	char nr1[10];
	strncpy(nr1,n+1,strlen(n)-2);
	int nr = atoi(nr1);
	int bucket = computeSymbolIndex(symbol);
	if(NULL != symbolList(symbol)){
	zz = 0; //lista
	return names[bucket].list[nr];
	}
	else if(NULL != symbolString(symbol)){
	zz = 1; //string
	return names[bucket].str[nr+1];
	}
	else printf("%c[%d] nu este un element al unei liste existente si nici string\n",symbol,nr);
	return names[bucket].list[nr];
}

int symbolListSize(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return names[bucket].listSize;
}

float* parseToList(char* list, int* listSize)
{
	int startIndex = 0, endIndex = 0;
	float* listF = (float*)malloc(sizeof(float));
	float nr;
	char* number = (char*)malloc(strlen(list));
	int size = 0;
	for(int i=0; i<strlen(list); i++)
	{
		startIndex = i;
		endIndex = i;
		while( (list[i] >= '0' && list[i] <= '9') 
			|| list[i] == '.' )
		{
			i++;
			endIndex = i;
		}
		if(startIndex != endIndex )
		{
			strncpy(number, list+startIndex, endIndex-startIndex);
			nr = atof(number);
			size++;
			listF = realloc(listF, size*sizeof(float));
			listF[size-1] = nr;
		}
	}
	(*listSize) = size;
	return listF;
}

void updateSymbolVal(char symbol, float val)
{
	int bucket = computeSymbolIndex(symbol);
	names[bucket].nr = val;
	free(names[bucket].str);
	names[bucket].str = NULL;
	free(names[bucket].list);
	names[bucket].list = NULL;
}

void updateSymbolList(char symbol, char* list)
{
	int bucket = computeSymbolIndex(symbol);
	names[bucket].list = parseToList(list, &names[bucket].listSize);
	free(names[bucket].str);
	names[bucket].str = NULL;
}

void updateSymbolList1(char symbol, int nr, int val)
{
	if(NULL != symbolList(symbol)){
			int bucket = computeSymbolIndex(symbol);
			names[bucket].list[nr] = val;
	}
	else if(NULL != symbolString(symbol)){
			int bucket = computeSymbolIndex(symbol);
			names[bucket].str[nr+1] = (char)val;
	}
	else
		printf("lista %c nu are %d elemente sau nu a fost creata",symbol,nr);
}

void updateSymbolString1(char symbol, int nr, char* val)
{
	if(NULL != symbolString(symbol)){
		int bucket = computeSymbolIndex(symbol);
		char val1 = val[1];
		names[bucket].str[nr+1] = val1;
	}
}

void updateSymbolString(char symbol, char* string)
{
	int bucket = computeSymbolIndex(symbol);
	names[bucket].str = strdup(string);
	free(names[bucket].list);
	names[bucket].list = NULL;
}

void printAssign(char symbol)
{
	if(NULL != symbolString(symbol))
		printf("%c was assigned value %s\n",symbol,symbolString(symbol));
	else
		if(NULL != symbolList(symbol)){
			printf("%c was assigned a list: ",symbol);
			float* list = symbolList(symbol);
			int size = symbolListSize(symbol);
			for(int i=0; i< size; i++)
			{
				printf("%.2f ",list[i]);
			}
			printf("\n");
		}
		else
			printf("%c was assigned value %.2f\n",symbol,symbolVal(symbol));
}

void printVariable(char symbol)
{
	if(NULL != symbolString(symbol))
		printf("%s\n",symbolString(symbol));
	else
		if(NULL != symbolList(symbol)){
			printf("[ ");
			float* list = symbolList(symbol);
			int size = symbolListSize(symbol);
			for(int i=0; i< size; i++)
			{
				printf("%.2f ",list[i]);
			}
			printf("]\n");
		}
		else
			printf("%.2f\n",symbolVal(symbol));
}

int partition(float *list, int low, int high)
{
	float pivot = list[high];

	int i = (low - 1);
	float aux;
	for(int j=low; j<= high - 1; j++)
	{
		if(list[j] < pivot)
		{
			i++;
			aux = list[i];
			list[i] = list[j];
			list[j] = aux;
		}
	}
	aux = list[i+1];
	list[i+1] = list[high];
	list[high] = aux;
	return i+1;
}

void quickSort(float* list, int low, int high)
{
	int pi;
	if(low < high)
	{
		pi = partition(list, low ,high);

		quickSort(list, low, pi - 1);
		quickSort(list, pi + 1, high);
	}
}

void sortList(char symbol)
{
	if(symbolList(symbol) ==NULL)
		printf("%c nu este o lista",symbol);
	else{
	float* list = symbolList(symbol);
	int length = symbolListSize(symbol);
	quickSort(list, 0, length - 1);
	}
}

void updateSizeSymbol(char symbol,int size)
{
	int index = computeSymbolIndex(symbol); 
	names[index].listSize = size; 
	names[index].list = realloc(names[index].list, size*sizeof(float));
}

void removeElement(float* list, int index, char symbol)
{
	int size = symbolListSize(symbol);
	for(int i = index; i<size; i++)
	{
		list[i] = list[i + 1];
	}
	updateSizeSymbol(symbol, size - 1);
}

void removeDuplicates(char symbol)
{
	if(symbolList(symbol) ==NULL)
		printf("%c nu este o lista",symbol);
		else{
	float* list = symbolList(symbol);
	int length = symbolListSize(symbol);
	for(int i = 0; i < length - 1; i++)
	{
		for(int j = i + 1; j < length; j++)
		{
			if(list[i] == list[j])
			{
				removeElement(list, j, symbol);
				length--;
				j--;
			}
		}
	}
	}
}



int main()
{

return yyparse();
return 0;
}

void yyerror(char *s)
{
printf(s);
}
