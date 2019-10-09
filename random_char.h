//this library prints random chars and scans them only 
//in development stage 
void scanfunc();
void random_char()

{

char  str2[5];
	char str1[5];
int r,inner_n,outer_n;
   time_t t;
int array_word[5];
   srand((unsigned) time(&t));

   for(outer_n=0;outer_n>=0;outer_n++){
       for(inner_n=0;inner_n<=5;inner_n++){ 


	  // printf("        time is=%ld \n",time(&t));

	
		   r = rand();
array_word[inner_n]=("%c \n",r % (122 + 1-97)+97);
printf("%c ",array_word[inner_n]);
	 }
  scanfunc();
   
}}



void scanfunc()
{

     
char str1[5];
	scanf("%s", str1);

}
