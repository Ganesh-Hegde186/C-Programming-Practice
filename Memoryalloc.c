#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<malloc.h>
int main(void){
int *arr=(int*)malloc(3*sizeof(int));
printf("%zu\n",malloc_usable_size(arr));
int *p=calloc(5,sizeof(int));
printf("%zu\n",malloc_usable_size(p));
arr=realloc(arr,10*sizeof(int));
printf("%zu\n",malloc_usable_size(arr));
free(arr);
free(p);
return 0;
}
