//function to read file User_error and save its contents according to number in different file 
//
//
//
struct data
{
char character;
int present;

};
char test;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,no=0;


int saver()
{
struct data target[26];
 FILE * fp;
 FILE * fp1;
    char * test = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("User_error.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
    
target[0].character='a';
target[1].character='b';

target[2].character='c';
target[3].character='d';
target[4].character='e';
target[5].character='f';
target[6].character='g';
target[7].character='h';
target[8].character='i';
target[9].character='j';
target[10].character='k';
target[11].character='l';
target[12].character='m';
target[13].character='n';
target[14].character='o';
target[15].character='p';
target[16].character='q';
target[17].character='r';
target[18].character='s';
target[19].character='t';
target[20].character='u';
target[21].character='v';
target[22].character='w';
target[23].character='x';
target[24].character='y';
target[25].character='z';
 //to inislise value of target.character == 0 

    fp1 = fopen("scoreboard.txt", "r");

if(fp1!=NULL ){
printf("%d",no);

for(no=0;no<26;no++)
fscanf(fp1,"%c%d\n",&target[no].character,&target[no].present);
}

else
for(no=0;no<26;no++)
{
target[no].present=0;
printf("%d tar",&d);
}


fclose(fp1);
  printf("%c",target[0].character); 

while ((read = getline(&test, &len, fp)) != -1) {
        printf("Retrieved line of length %zu:\n", read);
        printf("%s",test);


for(no=0;no<26;no++){
if(*test==target[no].character)
 target[no].present++;   
 //printf("ram ram");   
}
    }
 fclose(fp);
  //  if (test)
    //    free(test);
   // exit(EXIT_SUCCESS);



 fp1 = fopen ("scoreboard.txt", "w+");
 
for(no=0;no<26;no++)
fprintf(fp1,"%c%d\n",target[no].character,target[no].present);
fclose(fp1);
}


 //FILE * fp;



