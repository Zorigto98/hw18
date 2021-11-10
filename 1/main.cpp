/*Напишите функцию swapvec, принимающую std::vector<int> и
 * указатель на массив переменных типа int (одного размера)
 * и обменивающую значения этих массивов.*/

#include <iostream>
#include <vector>

using namespace std;

void swapvec (vector<int>& vec, int (&arr)[4])
{
    for (int i=0; i<4; i++)
    {
        int temp;
        temp=vec[i];
        vec[i]=arr[i];
        arr[i]=temp;
    }
}

int main() {
    vector<int> a = {1, 2, 3, 4};

    int b[] = {2, 4, 6, 8};

    swapvec(a, b);

    for (int i=0; i<4; i++)
        cout << a[i];

    cout << endl;

    for (int i=0; i<4; i++)
        cout << b[i];
}
