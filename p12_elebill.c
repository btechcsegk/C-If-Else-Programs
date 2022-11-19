/*
p#12 Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>

main(){
	int unit;
	float bill;
	printf("Please enter basic salary : ");
	scanf("%d",&unit);
	if(unit<=50){
		bill=unit*0.5;
	}else if(unit<=150){
		bill=25+(unit-50)*.75;
	}else if(unit<=250){
		bill=25+75+(unit-150)*1.2;
	}else{
		bill=25+75+120+(unit-250)*1.5;
	}
	bill=bill+bill*.20;
	printf("total bill is %.2f",bill);
	
}

