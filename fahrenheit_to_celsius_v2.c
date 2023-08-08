#include <stdio.h>

/* print Fahrenheit-Celsius table 
* for fahr = 0,20, ... 300 */ 

#define UPPER 300
#define STEP 20
float convert(float fahrenheit);

main()
{
   float fahr;
   int lower, upper, step;

   char title_fahr[] = "FAHR";
   char title_cels[] = "CELS";
   printf("%s %s\n", title_fahr, title_cels);
   for (fahr = 0; fahr <= UPPER; fahr = fahr + STEP)
      printf("%3.0f %6.1f\n", fahr, convert(fahr));
   return 0;
}

float convert(float fahrenheit) {
    return (5.0/9.0) * (fahrenheit-32);
}
