#include<stdio.h>
int main()
{
int choice ;
float a=0,b=0
do
{
printf("n=====CALCULATOR====\n");
printf("1.Addition\n2 Subtraction\n3.Multiplication\n");
printf("4.diviision\n5.Exit\n");
printf("Enter two numbers:");
scanf("%d", &choice);
if (choice >= 1 && choice <= 4)
{
printf(enter two number: ");
scanf("%f %f" , &a , &b);
}
switch (choice)
{
case 1:
printf("Result=% 2f\n",a+b);
break;
case 2;
printf("Result=% 2f\n",a-b);
break;
case 3:
printf("Result=% 2f\n",a*b);
break;
case 4:
if(b !=0)
printf("Result=% 2f\n",a/b);
else
printf("Error:"Division by zero!\n");
break;
case 5:
printf("Existing the program...\n");
break;
default:
printf("Invailid choice  Try again.\n");
}
}while(choice !=5);
return 0;
}
