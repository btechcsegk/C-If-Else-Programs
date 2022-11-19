//P#6 Write a c program to check whether a year is leap year or not

#include<stdio.h>

main(){
	int y;
	printf("Please Enter Any Year: ");
	scanf("%d",&y);
	if((y%4==0 && y%100!=0) || y%400==0){
		printf("%d is leap year",y);
	}else{
		printf("%d is not leap year",y);
	}
}

