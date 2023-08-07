#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c, state;
    state = OUT;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        if (state == OUT) {
            putchar('\n');
            state = IN;
        }
        if (state == IN) {
            putchar(c);
        }
    }
    return 0;
}
