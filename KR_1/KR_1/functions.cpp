#include <iostream>

using namespace std;

template<typename T, typename U>
auto sum(T a, U b)
{
	return a + b;
}

void hello();
void goodbye();
int main()
{
	void (*functionPtr)();
	functionPtr = hello;
	functionPtr(); // ????? hello();
	functionPtr = goodbye;
	functionPtr(); // ????? goodbye();
	return 0;
}
//
void hello()
{
	std::cout << "Hello, World" << std::endl;
}
void goodbye()
{
	std::cout << "Good Bye, World" << std::endl;
}
//
auto sum(int i) {
	if (i == 1) {
		return i;
	}
	else {
		return sum(i - 1) + i;
	}
}
int main()
{
	//
	void (*functionPtr)();
	functionPtr = hello;
	functionPtr(); // ????? hello();
	functionPtr = goodbye;
	functionPtr(); // ????? goodbye();
	//
	auto b = 2 + 3.4;
	cout << b << endl;
	cout << sum(3, -4.5) << endl;
	cout << sum(5);
}