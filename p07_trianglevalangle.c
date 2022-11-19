//P#7 Write a c program to input angles of triangle and check whether it is valid or not

#include<stdio.h>

main(){
	int a1,a2,a3;
	printf("Please enter all angles of triangle : ");
	scanf("%d%d%d",&a1,&a2,&a3);
	if(a1+a2+a3==180){
		printf("triangle is valid");
	}else{
		printf("triangle is not valid");
	}
}

