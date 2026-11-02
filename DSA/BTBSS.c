#include<stdio.h>
#include<stdlib.h>
int Maxprofit(int *prices,int size);
int main(void){
int n=6;
int prices[]={7,1,5,3,6,4};
printf("Maximum profit we get on day %d\n",Maxprofit(prices,n));
return 0;
}
int Maxprofit(int *prices,int size){
int minprice=prices[0];
int maxprofit=0;
int s;
for(int i=0;i<size;i++){
if(prices[i]<minprice){
minprice=prices[i];
}
s=prices[i]-minprice;
if(s>maxprofit){
maxprofit=s;
}
}
return maxprofit;
}
