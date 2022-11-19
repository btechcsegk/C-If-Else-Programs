//P#8 Write a c program to input sides of triangle and check whether it is valid or not

#include<stdio.h>

main(){
	int s1,s2,s3;
	printf("Please enter all sides of triangle : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
		printf("triangle is valid");
	}else{
		printf("triangle is not valid");
	}
}

