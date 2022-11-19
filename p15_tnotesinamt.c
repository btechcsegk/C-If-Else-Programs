//p#15 Write a C program to count total number of notes(2000,500,100,50,10,5,2,1) in given amount

#include<stdio.h>

main(){
	int amt,n2000=0,n500=0,n100=0,n50=0,n10=0,n5=0,n2=0;
	printf("Please enter total amount : ");
	scanf("%d",&amt);
	if(amt>=2000){
		n2000=amt/2000;
		amt=amt%2000;
	}
	if(amt>=500){
		n500=amt/500;
		amt=amt%500;
	}
	if(amt>=100){
		n100=amt/100;
		amt=amt%100;
	}
	if(amt>=50){
		n50=amt/50;
		amt=amt%50;
	}
	if(amt>=10){
		n10=amt/10;
		amt=amt%10;
	}
	if(amt>=5){
		n5=amt/5;
		amt=amt%5;
	}
	if(amt>=2){
		n2=amt/2;
		amt=amt%2;
	}
	printf("You need : \n");
	printf("n2000: %d\nn500: %d\nn100: %d\nn50: %d\n",n2000,n500,n100,n50);
	printf("n10: %d\nn5: %d\nn2: %d\nn1: %d\n",n10,n5,n2,amt);
}

