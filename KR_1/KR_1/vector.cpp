#include <iostream>
#include <string>
#include <vector>

using namespace std;

void FillVector(vector<vector<double>>& vect, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			vect[i].push_back(-50 + rand() % 100);	//element values are limited for readability
		}
	}
}

void OutputVector(vector<vector<double>>& vect, const int& size)
{
	for (int i = 0; i < size; i++)
	{
		for (double x : vect[i])
		{
			cout << x << "\t";
		}
		cout << "\n" << "\n";
	}
}

int main()
{
	const int size = 10;
	vector<vector<double>> vect(size);	//creating vector
	FillVector(vect, size);	//fill vector
	vect[9].pop_back();
	cout << "//////////////////////////////////////////////////////////////////////////////" << "\n";
	OutputVector(vect, size);
	cout << "///////////////////////////////////////////////////////////////////////////////" << "\n";
}