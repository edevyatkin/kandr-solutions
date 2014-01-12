#include <stdio.h>

/* 1.5.2. Подсчет символов во входном потоке
 * вторая версия */

int main()
{
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    
    printf("%.0f\n", nc);
    
    return 0;
}
