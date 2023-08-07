#include <stdio.h>

/* print Fahrenheit-Celsius table 
* for fahr = 0,20, ... 300 */ 

main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = -100;
   upper = 200;
   step = 10;

   celsius = lower;
   char title_cels[] = "CELS";
   char title_fahr[] = "FAHR";
   printf("%s %s\n", title_cels, title_fahr);
   while (celsius <= upper) {
      fahr = (celsius * 9.0/5.0) + 32.0;
      printf("%3.0f %6.1f\n", celsius, fahr);
      celsius = celsius + step;
   }
}
