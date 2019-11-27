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
int msec = 0, trigger = 10; /* 10ms */
clock_t before = clock();



	  printf("\033[1;31m");
int n;
//char alphabet='a';
printf("Enter 1 to print random data in file and scan and save \n enter 3 for random char");


	  printf("\033[0;32m");

		
		scanf("%d",&n);

switch(n)
{
    case 1:
	    {
do {
  /*
   * Do something to busy the CPU just here while you drink a coffee
   * Be sure this code will not take more than `trigger` ms
   */

  clock_t difference = clock() - before;
  msec = difference * 1000 / CLOCKS_PER_SEC;

//  iterations++;

	       	    wrongchar();
saver();//infile newchar.h
} while ( msec < trigger );
//Practice('a');

 // ram();
     break;
	    }
case 3:
       {

random_char();
       break;
       
       }	
}
}


