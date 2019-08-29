#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "TT2.h"
#include "save_word.h"
#include "random_char.h"
#define MAX_WORD   100
#define NUM_WORDS  10
   
int main(int argc, char const *argv[])
{
int n;
printf("Enter 1 to print random data in file \n enter 2 for file handeling \n enter 3 for random char");

scanf("%d",&n);
switch(n)
{
    case 1:
	    {
     func1();
break;
	    }
case 2:{
    enter_data();
       break;
       }
case 3:
       {
random_char();

       break;
       }	}

}


