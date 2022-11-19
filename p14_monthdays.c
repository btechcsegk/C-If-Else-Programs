//p#14 Write a C program to input month number and print number of days in that month

#include<stdio.h>

main(){
	int mn;
	printf("Please enter month number : ");
	scanf("%d",&mn);
	if(mn==2 || mn==4 || mn==6 || mn==9 || mn==11){
		printf("This month has 30 days");
	}else if(mn==2){
		printf("this month has 28 days and it will have 29 days if leap year");
	}else{
		printf("this month has 31 days");
	}
	
}

