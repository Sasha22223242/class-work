#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

void Random(int* arr, int size);
void Maxim(int* arr, int size);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int size = 7;
    int arr[size];
    cout << "Заповнення масиву випадковими числами: ";
    Random(arr, size);
    cout << endl;

    Maxim(arr, size);

    cout << "Масив після заміни максимального елемента на 0: ";
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << ' ';
    }

    return 0;
}

void Random(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        *(arr + i) = -10 + rand() % (10 + 10 + 1);
        cout << *(arr + i) << ' ';
    }
}

void Maxim(int* arr, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *(arr + maxIndex)) {
            maxIndex = i;
        }
    }
    *(arr + maxIndex) = 0;
}
