/*Кролик сидит на нулевой ступеньке большой лестницы.
 * Он может прыгать на 1, 2 или 3 ступеньки вверх.
 * Кролик хочет допрыгать до n-й ступеньки, но может
 * сделать это большим количеством способов.*/

/*Напишите рекурсивную функцию, которая принимает
 * число n типа int, а возвращает количество способов,
 * которыми кролик может доскакать до n-й ступеньки. */

#include <iostream>

using namespace std;

int countWays (int n)
{
    if (n < 0) return 0;
    else if (n == 0) return 1;

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main() {

    cout << countWays(3);
}
