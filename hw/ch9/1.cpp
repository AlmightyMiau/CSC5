#include <iostream>
using namespace std;

int* allocateArray (int length);

int main () {
	int length = 3;
	int *ptr = allocateArray(length);
	cout << ptr << endl;
}
	
int* allocateArray (int length) {
	
	int* array = new int[length];

	for (int i = 0; i < length; i++) {
		array[i] = 0;
	}

	return &array[0];
}
