
#include<stdio.h>
int main(){
int a=20;
int b=10;
int result;
char operator;
printf("Enter an operator :");
scanf("%c",&operator);
if(operator=='+'){
	result=a+b;
	printf("%d+%d=%d",a,b,result);
}
else if(operator=='-'){
	result=a-b;
	printf("%d-%d=%d",a,b,result);}
else if(operator=='*'){
	result=a*b;
	printf("%d*%d=%d",a,b,result);}
else if(operator=='/'){
	result=a/b;
	printf("%d/%d=%d",a,b,result);}
else{
	printf("Invalid operator:");}
	return 0;
	}
