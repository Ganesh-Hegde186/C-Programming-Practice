#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
int rollno;
char *name;
float grade;
}Student;
void addStudents(Student *S,int *count,int capacity,int rollno,char *name,float grade);
void Display(Student *S,int count);
void gradesort(Student *S,int count);
int main(void){
int capacity=10;
int count=0;
Student *S=(Student*)malloc(capacity*sizeof(Student));
addStudents(S,&count,capacity,148,"Ganesh",98.62);
addStudents(S,&count,capacity,147,"Akash",62.67);
addStudents(S,&count,capacity,149,"Sai",78.62);
addStudents(S,&count,capacity,150,"Satwik",93.62);
addStudents(S,&count,capacity,151,"Bharath",87.76);
addStudents(S,&count,capacity,152,"Adi",77.65);

printf("The Students are:\n");
Display(S,count);

printf("After Sorting by grade:\n");
gradesort(S,count);
Display(S,count);
for(int i=0;i<count;i++){
free(S[i].name);
}
free(S);
return 0;
}

void addStudents(Student *S,int *count,int capacity,int rollno,char *name,float grade){
if(*count==capacity){
printf("List is Full\n");
return;
}
S[*count].rollno=rollno;
S[*count].grade=grade;
S[*count].name=malloc(strlen(name+1));
strcpy(S[*count].name,name);
(*count)++;
}

void Display(Student *S,int count){
printf("The students are\n");
for(int i=0;i<count;i++){
printf("%d  %s  %.2f\n",S[i].rollno,S[i].name,S[i].grade);
}
}


void gradesort(Student *S,int count){
for(int i=0;i<count-1;i++){
for(int j=0;j<count-i-1;j++){
if(S[j].grade>S[j+1].grade){
Student temp = S[j];
S[j]=S[j+1];
S[j+1]=temp;
}
}
}
}
