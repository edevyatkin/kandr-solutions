/* Задача 1.15
* 
* Вывод таблицы температур по Фаренгейту и Цельсию
* для fahr = 0, 20, ..., 300 
* версия с функцией */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float celsius(int f);

int main() {
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d %6.1f\n", fahr, celsius(fahr));
        
    return 0;
}

float celsius(int fahr) {
    return (5.0/9.0)*(fahr-32);
}
