/* Задача 1.12 */

#include <stdio.h>

#define IN  1   /* внутри слова */
#define OUT 0   /* вначале слова */

int main()
{
    int c, state;
    
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN)
                putchar('\n');
            state = OUT;
        }
        else {
            putchar(c);
            state = IN;
        }
    }
    
    return 0;
}

