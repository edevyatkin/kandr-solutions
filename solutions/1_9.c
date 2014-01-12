#include <stdio.h>

/* Задача 1.9 */

int main()
{
    int c, spaces;
    
    spaces = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++spaces;
            
        if (c != ' ')
            spaces = 0;
            
        if (spaces <= 1)
            putchar(c);
    }
    
    return 0;
}
