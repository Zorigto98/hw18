/*Напишите рекурсивную функцию, которая принимает большое число n типа long long и
переменную ans, а возвращает void. После завершения работы функции в переменной ans
должно оказаться количество чётных цифр в записи числа n.*/

#include <iostream>

using namespace std;

void evendigits (long long num, int& ans)
{
    if (num == 0)
    {
        if (ans == 0) ans++;
        return;
    }

    if ((num%10)%2==0) ans++;

    evendigits(num/10, ans);
}

int main() {
    int ans=0;
    long long num=9223372036854775806;

    evendigits(num, ans);

    cout << ans;
}
