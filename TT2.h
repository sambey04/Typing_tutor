//Return Random words form a dictionary named filett.txt

const char * func1(void)
{
    /* Open words file */
    FILE* fp = NULL;
    char words[20];
    char user[80];
    int i = 0 , ran = 0;//variable declaration
    srand(time(NULL));//Pseudo random number generator
    fp = fopen("filett.txt" , "r+");//File open in read mode
    for(; fgets(words , sizeof(words) , fp) ; i++)//Randomly choosing a word from text file.
          ;
        ran = rand() % i;
    rewind(fp);//position indicator back to beginning
    for(i = 0 ; i < ran ; i++)
        fgets(words , sizeof(words) , fp);//Display words
       // printf("%s" , words);
    return words;
}
