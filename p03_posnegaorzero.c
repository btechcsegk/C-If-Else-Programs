//P#3 Write a c program to check whether a number is negative , positive or zero

#include<stdio.h>

main(){
	float n;
	printf("Please enter a number : ");
	scanf("%f",&n);
	if(n<0){
		printf("Number is negative");
	}else if(n>0){
		printf("Number is positive");
	}else{
		printf("Number is zero");
	}
}

