int func1(void)
{
    /* Open words file */
    FILE* fp = NULL;
    char words[20];
    char user[80];
    int i = 0 , ran = 0;
    srand(time(NULL));
    fp = fopen("filett.txt" , "r+");
    for(; fgets(words , sizeof(words) , fp) ; i++)
          ;
        ran = rand() % i;
    rewind(fp);
    for(i = 0 ; i < ran ; i++)
        fgets(words , sizeof(words) , fp);
        printf("%s" , words);
    printf ("Give first string: ");
    scanf ("%s", &user);
    return 0;
}