#include <stdio.h>

int main()
{
	int pin=1234;
	int enteredpin;
	int choice;
	float balance=5000;
	float amount;

	printf("=====WELCOME TO ATM=====\n");

	printf("enter your pin:");
	scanf("%d",&enteredpin);

	if(enteredpin!=pin)
	{
		printf("invalid pin!\n");
		return 0;
	}
	printf("\n Login Successful!\n");

	do
	{
		printf("\n=====ATM MENU=====\n");
		printf("1.check balance\n");
		printf("2.deposit money\n");
		printf("3.withdraw money\n");
		printf("4.exit\n");

		printf("enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case1:
			   printf("your balance:RS.%2f\n",balance);
			   break;
			case2:
			   printf("enter deposit amount:");
			   scanf("%f",&amount);

			   if(amount>0)
			   {
				balance=balance+amount;
				printf("money deposited successfully!\n");
				printf("new balance:RS.%2f\n",balance);
			   }
			   else
			   {
				printf("invalid amount!\n");
			   }
			   break;
			case3:
			   printf("enter withdrawal amount:");
			   scanf("%f",&amount);

			   if(amount<=0)
			   {
				printf("invalid amount!\n");
			   }
			   else if(amount<=balance)
			   {
				balance=balance-amount;
				printf("please collect yor cash.\n");
				printf("remaining balance:RS.%2f\n",balance);
			   }
			   else
			   {
				printf("insufficient balance!\n");
			   }
			   break;
			case4:
			   printf("thank you for using ATM!\n");
			   break;
			default:
			   printf("invalid choice!\n");
		}
	}while (choice!=4);
	return 0;
}