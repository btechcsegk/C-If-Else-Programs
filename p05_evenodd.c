//P#5 Write a c program to check whether a number is even or odd

#include<stdio.h>

main(){
	int n;
	printf("Please Enter Any Number: ");
	scanf("%d",&n);
	if(n%2==0){
		printf("%d is even number",n);
	}else{
		printf("%d is odd number",n);
	}
}

