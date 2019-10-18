#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#include "TT2.h"
#include "save_word.h"
#include "random_char.h"
#include "wrongchar.h"

#define MAX_WORD   100
#define NUM_WORDS  10
   
int main(int argc, char const *argv[])
{
int n;
printf("Enter 1 to print random data in file and scan and save \n  enter 3 for random char");

scanf("%d",&n);

switch(n)
{
    case 1:
	    {
     wrongchar();
break;
	    }
case 3:
       {

random_char();
       break;
       
       }	
}

}


