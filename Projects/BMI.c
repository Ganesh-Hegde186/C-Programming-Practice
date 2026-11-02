#include<stdio.h>
float BMI(float x,float y);
int main(void){
float n,p,z;
printf("Enter your weight in Kg:");
scanf("%f",&n);
printf("Enter your Heights in Cm:");
scanf("%f",&p);
z=BMI(n,p);
printf("Your BMI is :%f\n",z);
if(z<18.5){
printf("You are underweight\n");
}
else if(z>18.5 || z<24.9){
printf("Your Weight is Normal\n");
}
else if(z>=25 || z<29.9){
printf("You are Overweight\n");
}
else{
printf("Your weight is Obesity ");
}
return 0;
}
float BMI(float x,float y){
return x/((y/100.00)*(y/100.00));
}

