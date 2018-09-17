#include<stdio.h>
int main(){
  
  float C, F;
  printf("enter the temperature in F:");
  scanf("%f",&F);
  C=(F-32)*5/9;
  printf("%.1fF=%.1fC",F,C);	
}
