//Program to check eligibility for student to sit for finall exam
//Name: SUCCESS MWENDWA
//REG NO: BCS-03-0046/2026
//WEEK 3 ACTIVITY 
 #include <stdio.h>
 int main(){
 	float attendance, attended, marks;
 	printf("Total class attended in 16weeks:");
 	scanf("%f", &attendance);
 	printf(" Enter marks scored:");
 	scanf("%f", &marks);


 if(attendance >=12 &marks >=40){
 		attended = 0.75 * attendance;
 	printf("Your attendance is: %.2f \n", attended);
 	printf("Your scored:%.2f\n", marks);
 	printf("You are eligable to sit for the exam.\n");
    }
 	
	 
	 else{
	 	printf("Not eligable for the exams");
	 };
	 
  
	 
	 return 0;
 }