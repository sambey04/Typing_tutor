//wrongchar.h
//fileHandeling 
//saves wrong words in a file name samplie3.txt

#include "TT2.h"

int wrongchar()
{
//char str1[80]
 char  	str2[80];
int i,j,k;
    //printf ("Give first string: ");
    //scanf ("%s", &str1);
    //for(k=0;str1[j]!="/0";k++)
      const char* str1 = func1(); // fraught with problems
 printf("%c",str1[1])  ; 
printf ("Give second string: ");
    scanf ("%s", &str2);
   int size1= strlen(str1);
int size2= strlen(str2);

//printf("%c",str1[1]);


FILE *fptr = fopen("sample3.txt", "a");
    for (j=0; j<size1; j++)
    {
    if(str1[j]!=str2[j])
    fprintf(fptr,"%c\n", str1[j]);
   // printf("%s",str1[1]);
    }
    
 fclose(fptr); 
    return 0;

}
