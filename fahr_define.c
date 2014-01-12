#include <stdio.h>

#define    LOWER   0
#define    UPPER   300
#define    STEP    20

/* 1.4. Вывод таблицы температур по Фаренгейту и Цельсию 
 * версия с оператором for 
 * и define */

int main() {
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
        
    return 0;
}
