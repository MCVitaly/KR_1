#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	string path = "MyFile.txt";
	ofstream fout;
	//
	fout.open(path);		//fout.open(path, ofstream::app);	//data in the file is not lost
	if (!fout.is_open())
	{
		cout << "error" << endl;
	}
	else
	{
		fout << "First line\n";
		fout << "Second line\n";
	}
	fout.close();
	//
	//
	ifstream fin;
	fin.open(path);
	string str;
	if (!fin.is_open())
	{
		cout << "error" << endl;
	}
	else {
		char ch;
		while (fin.get(ch))		//fin.get() //reading data one symbol at a time
		{
			cout << ch;
		}
		//
		while (!fin.eof())
		{
			fin >> str;		//reading data up to first space
			cout << str;
		}
		//
		while (!fin.eof())
		{
			str = "";
			getline(fin, str);		//reading data line by line	//fin.getline(str, 10)	//reading 10 symbols
			cout << str;
		}
	}
	fin.close();
	//
	return 0;
}