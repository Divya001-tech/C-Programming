#include<stdio.h>
int main()
{
 int pin=2008;
 int epin;
 float balance=100000;
 float amount;
 int choice;
 printf("welcome To Our DCE ATM");
 printf("Enter The Pin");
 scanf("%d",&epin);

 if(epin!=pin)
 {
  printf("Invalid Pin");
  return 0;
 }
 printf("Login Successfull");

 do
 {
  printf("\nMenu\n");
  printf("\n1.Check the balance\n");
  printf("\n2.Withdraw money\n");
  printf("\n3.Deposit money\n");
  printf("\n4.Exit\n");
  printf("\nEnter Your Choice\n");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:
   {
    printf("Total balance=%f",balance);
    break;
   }
   case 2:
   {
    printf("\nEnter the withdrawal amount\n");
    scanf("%f",&amount);
     if(amount<=0)
     {
      printf("\nInvalid amount\n");
     }
     else if(amount>balance)
     {
      printf("\nInsufficient Amount\n");
     }
     else
     {
      balance=balance-amount;
      printf("New Balance=%f",balance);
      printf("\nWithdraw Successfull\n");
     }
     break;
     }
     case 3:
     {
      printf("\nEnter the Deposit amount\n");
      scanf("%f",&amount);
       if(amount>0)
       {
	balance+=amount;
	printf("\nDeposit Successfull\n");
	printf("Total Amount=%f",balance);
       }
       break;
     }
     case 4:
     {
      printf("\nThank You\n");
      break;
     }
     default:
     {
      printf("\nInvalid Choice....Bye Bye...\n");
     }
     }
     }while(choice!=4);
    return 0;
 }
