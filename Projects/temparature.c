#include<stdio.h>

float Fahrenheit(float a);

int main(void){

        float n;

    printf("Enter your choice 1 or 2:");
    scanf("%i",&n);
case 1:
    float t;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&t);
    printf("%.2f Celsius in Fahrenheit is %.2f\n",t, Fahrenheit(t));
    break;
case 2:
    float s;
    printf("Enter the temperature in Fahrenheit ");
    scanf("%f",&s);
   printf("%.2f Fahrenheit in Celsius is %.2f\n",s, Celsius(s));
    break;
    return 0;
}
float Fahrenheit(float a){
    return (((9.0/5.0)*a)+32);}
float Celsius(float b){
 return (((5.0/9.0)*b)-32);
}
