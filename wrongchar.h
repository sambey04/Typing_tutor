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
 FILE *fptr = fopen("sample3.txt", "a");
    for (j=0; j<size2; j++){
           for (i=0; i<size1; i++){
                  if (str1[i]==str2[j])
                      memmove(&str1[i], &str1[i + 1], strlen(str1) - i);
          }
    }
    fprintf (fptr,"%s\n", str1);
 fclose(fptr); 
    return 0;
 
}
