//Program on Data purchase options
//Name: SUCCESS MWENDWA
//REG NO: BCS-03-0046/2026
/*A local mobile service provider offers different internet data bundles as shown below:
Option Bundle Cost (KES)
1 100 MB 50
2 500 MB 200
3 1 GB 350
4 2 GB 600
Task:
Write a C program that:
1. Displays the menu above.
2. Asks the user to enter their choice (1–4).
3. Uses a switch statement to display the bundle selected and its cost.
4. Displays Displays “Invalid choice” if the user enters a number outside 1–4“*/

#include <stdio.h>
int main(){
	int choice;
	printf("LowCall mobile charges.\n");
	printf("1. 100MB @ 50\n" );
	printf("2. 500MB @ 200\n");
	printf("3. 1GB   @ 350\n");
	printf("4. 2GB   @ 600\n");
	
	printf("Enter you prefered option(1-4): \n");
	scanf("%d", &choice);
	
	switch(choice){
		
	case 1:
	      printf("You choose option 1 for 100MB\n");
	      printf("Amount to pay KES 50\n");
		 break;
	 case 2:
	 	printf("You choose option 2 for 500MB\n");
	 	printf("Amount to pay KES 200\n");
	    break;
	case 3:
		printf("You choose option 3 for 1GB\n");
		printf("Amount to pay KES 350\n");
		break;
	case 4:
		printf("You choose option 4 for 2GB\n");
		printf("Amount to pay KES 600\n");
		break;
	default:
		printf("Invalid Choice!\n");
	
	}
	
	
	return 0;
}