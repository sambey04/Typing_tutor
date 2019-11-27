#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "save_word.h"
#include "random_char.h"
#include "wrongchar.h"
#include "newchar.h"
#include "ramji.h"
//#include "Practice.h"

#define MAX_WORD   100
#define NUM_WORDS  10

int main(int argc, char const *argv[])
{

int msec = 0, trigger = 100; /* 100ms*/  
clock_t before = clock();
float number=0,WPM;



	  printf("\033[1;31m");
int n;
//char alphabet='a';
while(1){
printf("Enter \n 1) Easy  \n 2) Difficult \n 3) Show Scoreboard \n 4) Efficiency \n ");


	  printf("\033[0;32m");

		
		scanf("%d",&n);

switch(n)
{
    case 2:
	    {
do {

  clock_t difference = clock() - before;
  msec = difference * 1000 / CLOCKS_PER_SEC;

number++;
  wrongchar();
  saver();//infile newchar.h
} while ( msec < trigger );
WPM=number/0.16;
printf("YOUR WPM IS %f",WPM);
     break;
	    }

case 1:
       {

random_char();
       break;
       
       }	

case 3:
{
reportcard();

break;
}
case 4:
{
efficincy();
break;

}

}
}
}

