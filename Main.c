#include<stdio.h>
#include<stdlib.h>
void main()
{
int r,n;
   time_t t;
	   srand((unsigned) time(&t));
  for(n=0;n<=100;n++){ 


	   printf("time is=%ld \n",time(&t));
//delay(1000);
	   r = rand();
printf("%d",r % (122 + 1-97)+97);
}}
