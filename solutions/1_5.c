#include <stdio.h>

/* 1.3 Вывод таблицы температур по Фаренгейту и Цельсию 
 * версия с оператором for 
 * 
 * Задача 1.5 */

int main() {
    int fahr;
    
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
        
    return 0;
}
