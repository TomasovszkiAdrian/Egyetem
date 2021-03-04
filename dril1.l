%{
#include <stdio.h>	
int mgh = 0;
int msh = 0;
%}
magan[a,e,i,o,u];
mas[q,w,r,t,z,p,s,d,f,g,h,j,k,l,y,x,c,v,b,n,m];
%%
{magan}*(\.{magan}+)? {mgh++;}

%%
int main(){
	yylex();
	printf("Number of real numbers: \n", mgh);
	
	return 0;
}