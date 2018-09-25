#include<stdio.h>
#include<math.h>

int main(){
 	float weight,height;
 	double BMI;
 	printf("Enter your height:");
 	scanf("%f",&height);
 	printf("Enter your weight:");
 	scanf("%f",&weight);
 	while(height>=0&&weight>=0){
 		BMI=weight/((height/100)*(height/100));
 		if(BMI<18.5)
 			printf("你的BMI過輕\n");
 		else if(BMI<24&&BMI>=18.5)
		 	printf("你的BMI正常\n");
		else if(BMI<27&&BMI>=24)
			printf("你的BMI過重");
		else if(BMI<30&&BMI>=27)
			printf("你的BMI輕度肥胖");
		else if(BMI<35&&BMI>=30)
			printf("你中度肥胖\n");
		else if(BMI>=35)
			printf("你重度肥胖\n");
		printf("Enter your height :");
		scanf("%f",&height);
		printf("Enter your weight :");
		scanf("%f",&weight);				
	}
 	return 0;
 }
