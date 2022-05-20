#include "overload.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	unsigned n = 0;
	cout << "Введите количество чисел, которые будут сортироваться: ";
	cin >> n;
	if (!cin) {
		cout << "Вы ввели неправильное число!Попробуйте снова!";
	}
	float* arr = new float[n];
	int* arr1 = new int[n]; 
	Complex* arr2 = new Complex[n];
	random_numbers(arr1,n);
	random_numbers(arr2, n);
	random_numbers(arr,n); 
	bubbleSort(arr,n);
	bubbleSort( arr1,n);
	bubbleSort(arr2, n);
	print( arr1,n);
	print( arr,n);
	print(arr2, n);
	delete_memory(arr);
	delete_memory(arr1);
	delete_memory(arr2);


	return 0;
}