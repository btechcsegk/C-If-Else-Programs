//p#13 Write a C program to input week number and print week day

#include<stdio.h>

main(){
	int wkn;
	printf("Please enter week number : ");
	scanf("%d",&wkn);
	if(wkn==1){
		printf("It is Monday");
	}else if(wkn==2){
		printf("It is Tuesday");
	}else if(wkn==3){
		printf("It is Wednesday");
	}else if(wkn==4){
		printf("It is Thursday");
	}else if(wkn==5){
		printf("It is Friday");
	}else if(wkn==6){
		printf("It is Saturday");
	}else if(wkn==7){
		printf("It is Sunday");
	}else{
		printf("Invalid Week Number!");
	}
	
}

