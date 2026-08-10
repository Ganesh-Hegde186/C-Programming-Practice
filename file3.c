#include<stdio.h>
#include<stdlib.h>
typedef struct{
int id;
char name[20];
float marks;
}Student;
int main(void){
FILE *fp=fopen("numbers.txt","wb");
if(fp==NULL){
perror("Error opening file\n");
return 1;
}
Student S[3]={{1,"Ganesh",92.7}};
fwrite(&S[0],sizeof(Student),1,fp);
fclose(fp);
fp=fopen("numbers.txt","rb");
if(fp==NULL){
perror("Error opening file\n");
return 1;
}
Student datafromfile;
fread(&datafromfile,sizeof(Student),1,fp);
fclose(fp);
printf("Student Id: %d\n",datafromfile.id);
printf("Student Name: %s\n",datafromfile.name);
printf("Student Id: %f\n",datafromfile.marks);

return 0;
}
