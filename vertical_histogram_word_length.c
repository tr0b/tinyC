#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int character, number_characters, state;
    state = OUT;
    number_characters = 0;
    while((character = getchar()) != EOF) {
        if (character == ' ' || character == '\n' || character == '\t')
            state = OUT;
        if (state == IN) {
            ++number_characters;
            putchar(character);
        }
        else if (state == OUT) {
            printf(" %d\n", number_characters);
            state = IN;
            number_characters = 0;
        }
    }
}
