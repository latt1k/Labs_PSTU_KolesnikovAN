#include <iostream>
#include <locale.h>  // Для setlocale
#include <stdlib.h>  // Для rand()

using namespace std;

// Функция для вычисления суммы элементов ниже главной диагонали
int sumB(int a[100][100], int N) 
{
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i > j) { // Условие: ниже главной диагонали
                sum += a[i][j];
            }
        }
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int count, N;

    // Спрашиваем, сколько всего матриц
    cout << "Введите количество матриц (n): ";
    cin >> count;

    // Спрашиваем размер квадратной матрицы
    cout << "Введите размер квадратной матрицы (N x N): ";
    cin >> N;

    int a[100][100]; // Наша матрица
    int maxSum = 0;
    bool isFirst = true;

    // Цикл по количеству матриц
    for (int k = 0; k < count; ++k) {//k-для перебора матриц по очереди
        cout << "\nМатрица номер " << k + 1 << ":" << endl;

        // Генерация и вывод матрицы
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                a[i][j] = rand() % 21 - 10; // Числа от -10 до 10
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }

        // Вызов функции
        int currentSum = sumB(a, N);
        cout << "Сумма ниже главной диагонали: " << currentSum << endl;

        // Поиск максимума
        if (isFirst) {
            maxSum = currentSum;
            isFirst = false;
        }
        else if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    cout << "\n========================================" << endl;
    cout << "Максимальная сумма среди всех матриц: " << maxSum << endl;

    return 0;
}