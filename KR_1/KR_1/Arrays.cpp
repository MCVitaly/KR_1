#include <iostream>

using namespace std;


int main()
{
	int size=10;
	int arr1[10];
	double** arr = new double* [size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = new double[2];
	}
	for (auto &x : arr1)
	{
		x = rand()%10;
	}
	for (auto& x : arr1)
	{
		cout<<x<<" ";
	}

	for (int i = 0; i < size; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;
}