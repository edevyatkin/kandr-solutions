/* 1.7. Тестирование power - функции возведения в степень */

#include <stdio.h>

int power();

int main()
{
    int i;
    
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}

/* power: возводит base в n-ю степень; n >= 0 
 *        версия в старом стиле */
power(base, n)
int base, n; 
{
    int i, p;
    
    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}


