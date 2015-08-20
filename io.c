#include <stdio.h>
#include "io.h"
/* Prompt for an unsigned int value and return it */

unsigned io_ask()
{
   unsigned val;
   int amount;

   printf ("Enter a number (0 to stop program): ");
   if ((amount = scanf("%u", &val)) <= 0)
   {
      val = 0
   }
   return val;
}

void io_report(unsigned val, char* str)
{
   printf("%u %s\n\n", val, str);
}
