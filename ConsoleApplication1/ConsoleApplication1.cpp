#include <conio.h>
#include <iostream>
#include <random>
#include <time.h>

using std::cout;
using std::cin;
using std::endl;
int* arr, size;
int numb2;
int last;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введите длину массива: ";
    cin >> size;
    srand(time(NULL));
    arr = new int[size];
    cout << "массив: ";
    int numb = size - 1;
    for (int i(0); i < size; i++)
    cout << (arr[i] = rand() % size + 1) << ' ';
    for (int i(0); i < size; i++)
        if (arr[i] & 1)
            numb = i+1;
    cout << endl;
    cout << "массив (нечётные):";

    for (int i(0); i < size; i++)
        if (arr[i] & 1)
        {
            last = arr[i];
            cout << arr[i] << ' ';
        }
    cout << endl;
    cout << "последний нечётный элемент массива:" << last << endl;
    cout << "номер элемента:" << numb;
    return 0;
}