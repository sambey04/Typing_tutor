int wrongchar()
{
char str1[80], str2[80];
int i,j;
    printf ("Give first string: ");
    scanf ("%s", &str1);
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
