#include<stdio.h>
void FizzBuzz(int a,int b);
int main(void){
int m,n;
printf("Enter the range of number:");
scanf("%i",&m);
scanf("%i",&n);
FizzBuzz(m,n);
return 0;
}
void FizzBuzz(int a,int b){
for(int i=a;i<=b;i++){
 if(i%3==0 && i%5==0){
printf("FizzBuzz\n");
}

else if(i%3==0){
printf("Fizz\n");
}
else if(i%5==0){
printf("Buzz\n");
}
else{
printf("%i\n",i);
}
}
}

