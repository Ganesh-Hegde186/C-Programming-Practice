#include<stdio.h>
#include<string.h>
char *rev(char *st,int p);
int main(void){
char string[100];
printf("Enter the string:");
scanf("%s",string);
int n = strlen(string); 
printf("Reverse String is:%s\n",rev(string,n));
return 0;
}
char *rev(char *st,int p){
char tmp=0;
for(int i=0;i<p/2;i++){
{
tmp=st[i];
st[i]=st[p-i-1];
st[p-i-1]=tmp;
}
return st;
}
