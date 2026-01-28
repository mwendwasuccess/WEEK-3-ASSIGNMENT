//Progran to pay water bill
//Name: SUCCESS MWENDWA
//REG NO: BCS-03-0046/2026

// 0–30 units ? 20 KES per unit
// 31–60 units ? 25 KES per unit
// Above 60 units ? 30 KES per unit
// Displays the total bill in KES with two decimal places. 

#include <stdio.h>
int main(){
	int units;
	float amountunits;
	printf("Enter total units used:");
	scanf("%d", &units);
	
	if(units >=0 &&units<=31){
		amountunits = units * 20;
	// 0–30 units ? 20 KES per unit	
		printf("Amount to be paid KSH:%.2f\n", amountunits);
	}
	
	else if(units >=31 &&units<=60){
		amountunits = 25 * units;
	//31–60 units ? 25 KES per unit	
			printf("Amount to be paid KSH:%.2f\n", amountunits);
	}
	
	else{
		amountunits = 30 * units;
		// Above 60 units ? 30 KES per unit
		printf("Amount to be paid KSH:%.2f\n", amountunits);	
	}
	
	
	
	return 0;
}