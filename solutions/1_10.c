#include <stdio.h>

/* Задача 1.10 */

int main()
{
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c != '\t')
            if (c != '\b')
                if (c != '\\')
                putchar(c);
                
        if (c == '\t')
            printf("\\t");
            
        if (c == '\b')
            printf("\\b");
            
        if (c == '\\')
            printf("\\\\");
    }
    
    return 0;
}
