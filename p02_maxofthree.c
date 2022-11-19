//P#2 Write a c program to find maximum of three numbers

#include<stdio.h>

main(){
	int a,b,c;
	printf("Please Enter Three Numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("%d is grater than %d and %d",a,b,c);
	}else if(b>a && b>c){
		printf("%d is grater than %d and %d",b,a,c);
	}else{
		printf("%d is grater than %d and %d",c,a,b);
	}
}

