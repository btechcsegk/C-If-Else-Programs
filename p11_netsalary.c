/*
p#11 Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<stdio.h>

main(){
	int bs,gross;
	printf("Please enter basic salary : ");
	scanf("%d",&bs);
	if(bs<=10000){
		gross=bs+(bs*.20)+(bs*.80);
	}else if(bs<=20000){
		gross=bs+(bs*.25)+(bs*.90);
	}else{
		gross=bs+(bs*.30)+(bs*.95);
	}
	printf("Gross salary is %d",gross);
	
}

