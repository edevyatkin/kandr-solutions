#include <stdio.h>

/* 1.2. Вывод таблицы температур по Фаренгейту и Цельсию
* для fahr = 0, 20, ..., 300 */

int main() {
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* нижняя граница температур в таблице */
    upper = 300;    /* верхняя граница */
    step = 20;      /* величина шага */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
