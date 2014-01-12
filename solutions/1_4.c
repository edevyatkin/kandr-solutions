#include <stdio.h>

/* Задача 1.4 
* 
* Вывод таблицы температур по Цельсию и Фаренгейту
* для celsius = 0, 20, ..., 300 
* версия с вещественной арифметикой 
* c заголовком таблицы и границами */

int main() {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      /* нижняя граница температур в таблице */
    upper = 300;    /* верхняя граница */
    step = 20;      /* величина шага */
    
    printf("%3c | %6c\n", 'C', 'F');    /* заголовок таблицы */
    printf("-------------\n");          /* граница заголовка */
    
    celsius = lower;
    while (celsius <= upper) {
        fahr = 9.0/5.0*celsius + 32.0;
        printf("%3.0f | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
