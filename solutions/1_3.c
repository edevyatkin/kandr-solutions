#include <stdio.h>

/* Задача 1.3 
* 
* Вывод таблицы температур по Фаренгейту и Цельсию
* для fahr = 0, 20, ..., 300 
* версия с вещественной арифметикой 
* c заголовком таблицы и границами */

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* нижняя граница температур в таблице */
    upper = 300;    /* верхняя граница */
    step = 20;      /* величина шага */
    
    printf("%3c | %6c\n", 'F', 'C');    /* заголовок таблицы */
    printf("-------------\n");          /* граница заголовка */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f | %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}
