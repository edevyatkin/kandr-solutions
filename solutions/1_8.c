#include <stdio.h>

/* Задача 1.8 Подсчет строк, табуляций и пробелов во входном потоке */

int main() 
{
    int c, nl, nt, ns;
    
    nl = nt = ns = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    
    printf("Lines: %d\n", nl);
    printf("Tabs: %d\n", nt);
    printf("Spaces: %d\n", ns);
    
    return 0;
}
