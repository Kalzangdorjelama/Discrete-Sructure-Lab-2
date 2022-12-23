//Write a program to implement the concept of linear congruence. 

#include<stdio.h>
#include<conio.h>
int main()
{
	int xo,x1; 
	int a,c,m; 
	int i,n; 
	int array[20]; 
	
	printf("Enter the seed value xo: ");
	scanf("%d",&xo);
	printf("\n");
	
	printf("Enter the constant multiplier a: ");
	scanf("%d",&a);
	printf("\n");
	
	printf("Enter the increment c: ");
	scanf("%d",&c);
	printf("\n");	
	 
	printf("Enter the modulus m: ");
	scanf("%d",&m);
	printf("\n");
	
	printf("How many random numbers you want to generate: ");
	scanf("%d",&n);
	printf("\n");				
	
	for(i=0;i<n;i++) 
	{
		x1=(a*xo+c) %m;
		array[i]=x1;
		xo=x1;
		
	}
	
	
	printf("The generated random numbers are: ");
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
		printf("\t");
	}
	
	getch();
	return(0);
	
}