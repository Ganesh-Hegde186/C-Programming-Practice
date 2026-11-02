#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Parenthesis(char*s);
int main(void){
char t[10000];
t[0]='[';t[1]='{';t[2]='(';t[3]=')';t[4]='}';t[5]=']';t[6]='\0';
if(Parenthesis(t)){
printf("Valid Parenthesis\n");
}
else {
printf("Invalid\n");
}

return 0;
}
bool Parenthesis(char *s){
char stack[10000];
int top=-1;
for(int i=0;s[i]!='\0';i++){
if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
stack[++top]=s[i];
}
else if(s[i]=='}'||s[i]==']'||s[i]==')'){
if(top==-1){
return 0;
}
char popped=stack[top--];
if(popped=='(' && s[i]==')'){
}
else if(popped=='{' && s[i]=='}'){
}
else if(popped=='[' && s[i]==']'){
}
else return 0;
}
}
return(top==-1);
}

