#include<stdio.h>
#include<stdlib.h>
typedef struct{
char *name;
int age;
float marks;
}Student;
int main(void){
int n;
printf("Enter the Student size:\n");
scanf("%d",&n);
Student S[n];
for(int i=0;i<n;i++){
S[i].name=(char *)malloc(100*sizeof(char));
if(S[i].name==NULL)return 1;
printf("Enter the Student name:\n");
scanf("%99s",S[i].name);
printf("Enter the age:\n");
scanf("%d",&S[i].age);
printf("Enter the marks:\n");
scanf("%f",&S[i].marks);
}
for(int i=0;i<n;i++){
printf("Name:%s,Age:%d,Marks:%f\n",S[i].name,S[i].age,S[i].marks);
free(S[i].name);
}
return 0;
}
