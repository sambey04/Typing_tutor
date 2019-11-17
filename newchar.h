
//function to read file User_error and save its contents according to number in different file 
//
char test;
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
int saver()
{
FILE * fptr = fopen("User_error.txt","a");

for(j=0;j<10;j++)
{
fscanf(fptr,"%s",&test);


if(test=='a')
{
a++;
}	

if(test=='b')
{
b++;
}	
if(test=='c')
{
c++;
}	
if(test=='d')
{
d++;
}	
if(test=='e')
{
e++;
}	
if(test=='f')
{
f++;
}	
if(test=='g')
{
g++;
}	
if(test=='h')
{
h++;
}	
if(test=='i')
{
i++;
}	
if(test=='j')
{
j++;
}	
if(test=='k')
{
k++;
}	
if(test=='l')
{
l++;
}	
if(test=='m')
{
m++;
}	

if(test=='n')
{
n++;
}	

if(test=='o')
{
o++;
}	
if(test=='p')
{
p++;
}	
if(test=='q')
{
q++;
}	
if(test=='r')
{
r++;
}	
if(test=='s')
{
s++;
}	
if(test=='t')
{
t++;
}	
if(test=='u')
{
u++;
}	
if(test=='v')
{
v++;
}	
if(test=='w')
{
w++;
}	
if(test=='x')
{
x++;
}	
if(test=='y')
{
y++;
}	
if(test=='z')
{
z++;
}	
}
FILE *filePointer  = fopen(“user_score.txt”,“w”);
fprintf(filePointer, "%s",a);
fclose(filePointer);
}
