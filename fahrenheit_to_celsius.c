#include <stdio.h>

/* print Fahrenheit-Celsius table 
* for fahr = 0,20, ... 300 */ 

main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;

   fahr = lower;
   char title_fahr[] = "FAHR";
   char title_cels[] = "CELS";
   printf("%s %s\n", title_fahr, title_cels);
   while (fahr <= upper) {
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }
}
