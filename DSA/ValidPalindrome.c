#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool Palindrome(char *s);
int main(void){
char c[1000];
strcpy(c,"A Man , aplan, acanal: Panama");
if(Palindrome(c)){
printf("The string is a palindrome.\n");
}
else {
printf("The string is not a palindrome.\n");
}
return 0;
}
bool Palindrome(char *s){
char x[1000];
int j=0;
int n=strlen(s);
for(int i=0;i<n;i++){
if(isalnum(s[i])){
x[j]=tolower(s[i]);
j++;
}
}
x[j]='\0';
int i=0;
j--;
while(i<j){
if(x[i]!=x[j])
{
return false;
}
i++;
j--;

}
return true;
}
