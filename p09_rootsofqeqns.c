//P#9 Write a c program to find all roots of a quadratic equation

#include<stdio.h>
#include<math.h>

main(){
	int a,b,c,D;
	float x1,x2;
	printf("Please enter coefficients of quadratic equation : ");
	scanf("%d%d%d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>=0){
		x1=(-b + sqrt(D))/(2*a);
		x2=(-b - sqrt(D))/(2*a);
		printf("Roots are x1=%f and x2=%f",x1,x2);
	}else{
		printf("Roots are imaginary");
	}
}


