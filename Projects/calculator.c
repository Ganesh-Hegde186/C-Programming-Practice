#include<stdio.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
float divide(float a,float b);
int modulo(int a,int b);
int main(void){
int x,y,z,p,q,r;
printf("Enter the X value:");
scanf("%i",&x);
printf("Enter the y value:");
scanf("%i",&y);
printf("Addition of %i and %i is:%i\n",x,y,add(x,y));
printf("Subtraction of %i and %i is:%i\n",x,y,subtract(x,y));
printf("Multiplication of %i and %i is:%i\n",x,y,multiply(x,y));
printf("Division of %i and %i is:%f\n",x,y,divide(x,y));
printf("Remainder of %i and %i is:%i\n",x,y,modulo(x,y));
}
int add(int a,int b){
return a + b;
}
int subtract(int a,int b){
return a - b;
}
int multiply(int a,int b){
return a * b;
}
float divide(float a,float b){
return a / b;
}
int modulo(int a,int b){
return a % b;
}




