#include "overload.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	unsigned n = 0;
	cout << "VvofÂâåäèòå êîëè÷åñòâî ÷èñåë, êîòîðûå áóäóò ñîðòèðîâàòüñÿ: ";
	cin >> n;
	if (!cin) {
		cout << "Âû ââåëè íåïðàâèëüíîå ÷èñëî!Ïîïðîáóéòå ñíîâà!";
	}
	float* arr = new float[n];
	int* arr1 = new int[n]; 
	random_numbers(arr1,n);
	random_numbers(arr,n); 
	bubbleSort(arr,n);
	bubbleSort( arr1,n);
	print( arr1,n);
	print( arr,n);
	delete_memory(arr);
	delete_memory(arr1);


	return 0;
}
