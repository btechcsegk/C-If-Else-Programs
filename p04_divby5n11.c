//P#4 Write a c program to check whether a number is divisible by 5 and 11 or not

#include<stdio.h>

main(){
	int n;
	printf("Please Enter Any Number: ");
	scanf("%d",&n);
	if(n%5==0 && n%11==0){
		printf("%d is divisible by both 5 and 11",n);
	}else{
		printf("%d is not divisible by both 5 and 11",n);
	}
}

