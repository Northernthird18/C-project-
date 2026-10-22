#include<stdio.h>
int main()
{
   int pin=1234;
   int enteredpin;
   int choice;
   float balance=5000;
   float amount;
   printf("======WELCOME TO ATM=====\n");
   printf("Enter your pin:");
   scanf("%d", &enteredpin);

   if(enteredpin!=pin)
   {
      printf("Invalid pin!\n");
      return 0;
   }
   printf("\nlogin sucesful!\n");

   do
   {
   printf("\n======ATM MENU=====");
   printf("1.check balance\n");
   printf("2.deposit money\n");
   printf("3.withdraw money\n");
   printf("4.exit\n");

   printf("Enter your choice:");
   scanf("%d",&choice);

   switch(choice)
   {
      case 1:
	   printf("Your balance: rs.%2f\n",balance);
	   break;
      case 2:
	   printf("Enter depoist amount:");
	   scanf("%f",&amount);

	   if(amount>0)
	   {
	   balance=balance+amount;
	   printf("Money deposited sucessfully!\n");
	   printf("New balance: rs.%2f\n",balance);
	   }
	   else
	   {
	       printf("Inva;id amount!\n");
	   }
	   break;

      case 3:
	   printf("Enter  withdraw ampount:");
	   scanf("%f",&amount);

	   if(amount<=0)
	   {
	     printf("Invalid amount\n");
	   }
	   else if (amount<=balance)
	   {
	     balance=balance-amount;
	     printf("Please collect your cas.\n");
	     printf("Remainingbalance: rs.%2f\n",balance);
	   }
	   else
	   {
	      printf("Insuffient balance!\n");
	   }
	   break;

      case 4:
	   printf("Thank you for using ATM!\N");
	   break;
      default:
	  printf("Invalid choice!\n");
   }
} while(choice!=4);
return 0;
}