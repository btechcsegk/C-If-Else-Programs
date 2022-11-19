/*
p#10 Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F 
*/

#include<stdio.h>

main(){
	int phy,chem,bio,maths,cs;
	float per;
	printf("* Total marks of each subject is 100\n");
	printf("Please enter marks of Physics, Chemistry, Biology, Maths and Computer respectively: ");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&maths,&cs);
	per=(phy+chem+bio+maths+cs)/5.0;
	if(per>=90){
		printf("You got %.2f%c and GRADE A",per,37);
	}else if(per>=80){
		printf("You got %.2f%c and GRADE B",per,37);
	}else if(per>=70){
		printf("You got %.2f%c and GRADE C",per,37);
	}else if(per>=60){
		printf("You got %.2f%c and GRADE D",per,37);
	}else if(per>=40){
		printf("You got %.2f%c and GRADE E",per,37);
	}else{
		printf("You got %.2f%c and GRADE F",per,37);
	}
}

