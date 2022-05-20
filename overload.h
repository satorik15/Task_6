#ifndef OVERLOAD_H
#define OVERLOAD_H
#include <iostream>
#include <time.h>
using namespace std;
class Complex
{
private:
	double im = 0;
	double re = 0;
public:
	Complex(double date_re, double date_im)
	{
		im = date_re;
		re = date_im;
	}
	Complex()
	{
		re = 0;
		im = 0;
	}
	void set(double date_re, double date_im)
	{
		re = date_re;
		im = date_im;
	}

	void get(string sign)
	{
		sign = im > 0 ? "+ " : "- ";
		cout << re << " " << sign << im << "i" << endl;
	}
	int module();

	bool operator >(const Complex& second);
	friend ostream& operator <<(ostream& first, const Complex& second);

};
void bubbleSort(Complex arr2[], unsigned n);

void bubbleSort(int arr1[],unsigned n);

void bubbleSort(float arr[],unsigned n);

void print(int arr1[], unsigned n);

void print(float arr[], unsigned n);

void print(Complex arr2[], unsigned n);

void random_numbers(int arr1[], unsigned n);

void random_numbers(float arr[], unsigned n);

void random_numbers(Complex arr2[], unsigned n);

void delete_memory(float* arr);

void delete_memory(int* arr1);

void delete_memory(Complex* arr2);




#endif // !OVERLOAD_H
