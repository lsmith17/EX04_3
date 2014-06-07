#include<iostream>
using namespace std;

int min(const int* array, int size);

int main(){
	
	const int size = 8;
	int a[size] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	cout << min(a, size) << endl;
	
	
	int min(const int* array, int size)
	{
		int min = array[0];
		int i;

		for (i = 0; i < size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];
			}

		}
		return min;
	}