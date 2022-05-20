#include "overload.h"
int Complex::module() {
    return sqrt(pow(re, 2) + pow(im, 2));
}

bool Complex::operator >(const Complex& second) {
    return this->module() > (sqrt(pow(second.re, 2) + pow(second.im, 2)));
}

ostream& operator <<(ostream& first, const Complex& second) {
    first << second.re << " " << second.im;
    return first;
}
void bubbleSort(Complex arr2[], unsigned n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                swap(arr2[j + 1], arr2[j]);
            }
        }
    }
}
void bubbleSort(int arr1[], unsigned n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int b = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = b;
            }
        }
    }
}
void bubbleSort(float arr[], unsigned n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }
}
void print(int arr1[], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << endl;
    }
    cout << endl;
}

void print(float arr[], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}
void print(Complex arr2[], unsigned n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << endl;
    }
    cout << endl;
}
void random_numbers(int arr1[], unsigned n)
{
    srand((unsigned int)time(0));
    for (int i = 0; i < n; i++)
    {
        arr1[i] = rand() % 100 - 50;

    }
}
void random_numbers(float arr[], unsigned n)
{
    srand((unsigned int)time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i]= (rand() % 100 - 50) * 0.5;
    }
}
void random_numbers(Complex arr2[], unsigned n)
{
    srand((unsigned int)time(0));
    for (int i = 0; i < n; i++)
    {
        Complex complex(rand() % 10, rand() % 10);
        arr2[i] = complex;
    }
}
void delete_memory(float* arr) {
    delete[]arr;
}
void delete_memory(int* arr1) {
    delete[]arr1;
}
void delete_memory(Complex* arr2) {
    delete[]arr2;
}

