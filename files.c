
#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE* fp=fopen("numbers.txt","w");
if(fp==NULL){
perror("openining file");
return 1;
}
for(int i=1;i<=10;i++){
fprintf(fp,"%d\n",i);
}

fclose(fp);
return 0;
}
