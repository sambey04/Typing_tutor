/*
struct score
{
int total_letter;
int total_wrongl;
};
*/



int efficincy()
{
	struct score enter;
float eff,one,two;
	FILE *fp2=NULL;

    fp2 = fopen("letter.txt", "r");
fscanf(fp2,"%d\n%d",&enter.total_letter,&enter.total_wrongl);
 fclose(fp2);
one=enter.total_wrongl;
two=enter.total_letter;
eff=1.0000-one/two;
printf("Your Effiency is = %f",eff);

return eff;

}



void reportcard()
{
	int MAX;
	char alphabet;
struct data1 target[26];
		FILE *fp1=NULL;	
    fp1 = fopen("scoreboard.txt", "r");
    
for(no=0;no<26;no++){
fscanf(fp1,"%c%d\n",&target[no].character,&target[no].present);
if(MAX<target[no].present){
	MAX=target[no].present;
alphabet=target[no].character;
}
printf("Letter:%c No of Mistakes:%d \n",target[no].character,target[no].present);

}


}



