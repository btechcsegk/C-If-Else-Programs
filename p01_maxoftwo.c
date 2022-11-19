//P#1 Write a c program to find maximum of two numbers

#include<stdio.h>

main(){
	int a,b;
	printf("Please Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is grater than %d",a,b);
	}else{
		printf("%d is grater than %d",b,a);
	}
}

