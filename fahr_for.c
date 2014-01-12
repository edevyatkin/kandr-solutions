#include <stdio.h>

/* 1.3. Вывод таблицы температур по Фаренгейту и Цельсию 
 * версия с оператором for */

int main() {
    int fahr;
    
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
        
    return 0;
}
