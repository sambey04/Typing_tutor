void enter_data()
{
	//this function is for entering data in a file
 char str[20];
 FILE *fptr;
 fptr = fopen("user12.txt","w");
 printf("Enter input: ");
 scanf("%[^\n]%*c", str);  
 fprintf(fptr,"%s",str);
 fclose(fptr);
 //return 0;
 }
