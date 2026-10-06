#include <iostream>

void swapSimple(int& a, int& b);
void swapTricky(int& a, int& b);


int main() {

	int a{ 5 }, b{ 8 };

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swapSimple(a, b);

	std::cout << "Simple swap: a = " << a << ", b = " << b << std::endl;

	swapTricky(a, b);

	std::cout << "Tricky swap: a = " << a << ", b = " << b << "  (Try not to overflow)" << std::endl;


	return 0;
}



void swapSimple(int& a, int& b) {
	int c{ a };
	a = b;
	b = c;
}


void swapTricky(int& a, int& b) {
	a += b;
	b = a - b;
	a -= b;
}