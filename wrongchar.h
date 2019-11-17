//wrongchar.h
//fileHandeling 
//saves wrong words in a file name samplie3.txt
#include "newchar.h"

int wrongchar()
{
char str1[80];
 char  	str2[80];
int i,j,k;

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
        printf("%s" , words);
 
//printf ("Give first string: ");
    //scanf ("%s", &str1);
    //for(k=0;str1[j]!="/0";k++)
    //  const char* str1 = func1(); // fraught with problems
 //printf("%c",str1[1])  ; 
printf ("Give second string: ");
    scanf ("%s", &str2);
   int size1= strlen(words);
int size2= strlen(str2);

//printf("%c",str1[1]);


FILE *fptr = fopen("User_error.txt", "w");
    for (j=0; j<size1; j++)
    {
    if(words[j]!=str2[j])
    fprintf(fptr,"%c\n", words[j]);
   // printf("%s",str1[1]);
    }
    
 fclose(fptr);
saver();
    return 0;

}
