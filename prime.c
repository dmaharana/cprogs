#include "io.h"
#include "calc.h"

int main(void)
{
   unsigned prime_candidate;
   while((prime_candidate = io_ask()) > 0)
   {
      if (is_prime(prime_candidate))
         io_report(prime_candidate, "IS a prime.");
      else
         io_report(prime_candidate, "IS NOT a prime.");
   }
   return 0;
}
