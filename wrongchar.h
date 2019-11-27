//wrongchar.h
//fileHandeling 
//saves wrong words in a file name samplie3.txt
#include "Practice.h"
//#include "newchar.h"
struct data1
{
char character;
int present;

};

int wrongchar()
{

struct data1 target[26];
char str1[80];
 char  	str2[80],alphabet;
int i,j,k,n=1,MAX=0,no,jame;

    /* Open words file */
    FILE* fp = NULL;
    char words[20];
    char user[80];
    int in = 0 , ran = 0;
    srand(time(NULL));
    fp = fopen("Dictionary.txt" , "r+");
    for(; fgets(words , sizeof(words) , fp) ; in++)
          ;
        ran = rand() % in;
    rewind(fp);
    for(in = 0 ; in < ran ; in++)
        fgets(words , sizeof(words) , fp);

                if(n>0)
		{
		FILE *fp1=NULL;	
    fp1 = fopen("scoreboard.txt", "r");
    
for(no=0;no<26;no++){
fscanf(fp1,"%c%d\n",&target[no].character,&target[no].present);
if(MAX<target[no].present){
	MAX=target[no].present;
alphabet=target[no].character;
}}
		strcpy(words,Practice(alphabet));
		n++;
	//	printf("this is the alphabet=%c\n",alphabet);
		fclose(fp1);
		}

	       printf("%s" , words);
// printf("%s",Practice());

//printf ("Give first string: ");
    //scanf ("%s", &str1);
    //for(k=0;str1[j]!="/0";k++)
    //  const char* str1 = func1(); // fraught with problems
 //printf("%c",str1[1])  ; 
printf("\033[0;32m");
printf ("Give second string: ");

printf("\033[0;31m");

//colour change

scanf ("%s", &str2);
   int size1= strlen(words);
int size2= strlen(str2);

//printf("%c",str1[1]);
//printf("length of str2 is=%d",str1);
FILE *fptr = fopen("User_error.txt", "w");
    for (jame=0; jame<size1; jame++)
    {
    if(words[jame]!=str2[jame])
    fprintf(fptr,"%c\n",words[jame]);
  // printf(" what is this ==%c \n",words[jame]);
  // printf("%c",str2[jame]);
    }
    
 fclose(fptr);
    return 0;

}
