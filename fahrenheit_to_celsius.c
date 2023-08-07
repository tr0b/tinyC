#include <stdio.h>

/* print Fahrenheit-Celsius table 
* for fahr = 0,20, ... 300 */ 

#define UPPER 300
#define STEP 20

main()
{
   float fahr, celsius;
   int lower, upper, step;

   char title_fahr[] = "FAHR";
   char title_cels[] = "CELS";
   printf("%s %s\n", title_fahr, title_cels);
   for (fahr = 0; fahr <= UPPER; fahr = fahr + STEP) {
      celsius = (5.0/9.0) * (fahr-32);
      printf("%3.0f %6.1f\n", fahr, celsius);
   }
}
