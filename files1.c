#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE* fp=fopen("numbers.txt","r");
if(fp==NULL){
perror("openining file");
return 1;
}
int num;
while(fscanf(fp,"%d",&num)==1){
printf("Read value: %d\n",num);
}

fclose(fp);
return 0;
}


