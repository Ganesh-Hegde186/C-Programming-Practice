#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE* fp=fopen("/root/test.txt","w");
if(fp==NULL){
perror("fopen");
return 1;
}
return 0;
}
