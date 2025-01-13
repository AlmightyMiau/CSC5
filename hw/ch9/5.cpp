#include <iostream>
using namespace std;

int doSomething (int* x, int* y);

int main () {
	int a = 1;
	int b = 4;
	int result = doSomething(&a, &b);
	cout << result << endl;
}
	
int doSomething (int* x, int* y) {
	int temp = *x;
	*x = *y * 10;
	*y = temp * 10;
	return *x + *y;
}
