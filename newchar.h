//function to read file User_error and save its contents according to number in different file 
//
char test;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,j1=0;
int saver()
{

 FILE * fp;
    char * test = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("User_error.txt", "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);
    while ((read = getline(&test, &len, fp)) != -1) {
remove_spaces(test);
        printf("Retrieved line of length %zu:\n", read);
printf("%s",test);
if(*test=='a')
{
a++;
}	

else if(test=='b')
{
b++;
}	
else if(test=='c')
{
c++;
}	
else if(test=='d')
{
d++;
}	
else if(test=='e')
{
e++;
}	
else if(test=='f')
{
f++;
}	
else if(test=='g')
{
g++;
}	
else if(test=='h')
{
h++;
}	
else if(test=='i')
{
i++;
}	
else if(test=='j')
{
j++;
}	
else if(test=='k')
{
k++;
}	
else if(test=='l')
{
l++;
}	
else if(test=='m')
{
m++;
}	

else if(test=='n')
{
n++;
}	

else if(test=='o')
{
o++;
}	
else if(test=='p')
{
p++;
}	
else if(test=='q')
{
q++;
}	
else if(test=='r')
{
r++;
}	
else if(test=='s')
{
s++;
}	
else if(test=='t')
{
t++;
}	
else if(test=='u')
{
u++;
}	
else if(test=='v')
{
v++;
}	
else if(test=='w')
{
w++;
}	
else if(test=='x')
{
x++;
}	
else if(test=='y')
{
y++;
}	
else if(test=='z')
{
z++;
}	
}
 fclose(fp);
  //  if (test)
    //    free(test);
   // exit(EXIT_SUCCESS);

printf("a==%d \n",a);
printf("b==%d \n",b);
printf("c==%d \n",c);
printf("d==%d \n",d);
printf("e==%d \n",e);
printf("f==%d \n",f);
printf("g==%d \n",g);
printf("h==%d \n",h);
printf("i==%d \n",i);
printf("j==%d \n",j);
printf("k==%d \n",k);
printf("l==%d \n",l);
printf("m==%d \n",m);
printf("n==%d \n",n);
printf("0==%d \n",o);
printf("p==%d \n",p);
printf("q==%d \n",q);
printf("r==%d \n",r);
printf("s==%d \n",s);
printf("t==%d \n",t);
printf("u==%d \n",u);
printf("v==%d \n",v);
printf("w==%d \n",w);
printf("x==%d \n",x);
printf("y==%d \n",y);
printf("z==%d \n",z);
 //FILE * fp;
printf("test==%s \n",test);

   //fp = fopen ("file.txt", "w+");
   //fprintf(filePointer, "%s",a);

//fclose(filePointer);
}

void remove_spaces(char* s) {
    const char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}
