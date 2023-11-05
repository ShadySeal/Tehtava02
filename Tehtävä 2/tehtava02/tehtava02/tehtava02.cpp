#include <iostream>
using namespace std;

int main() {
	int x = 10;
	int* y = &x;
	cout << "Address of x: " << &x << "\n";
	cout << "Address of y: " << &y << "\n";
	cout << "Value of x: " << x << "\n";
	cout << "Value of y: " << *y << "\n";
	return 0;
}