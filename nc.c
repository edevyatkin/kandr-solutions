#include <stdio.h>

/* 1.5.2. Подсчет символов во входном потоке
 * первая версия */

int main()
{
    long nc;
    
    while (getchar() != EOF) {
        ++nc;
    }
    
    printf("%ld\n", nc);
    
    return 0;
}
