#include <stdio.h>

main()
{
    int c, n1;
    n1 = 0;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ++n1;
        
    printf("%d\n", n1);
}
