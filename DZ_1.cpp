#include <iostream>
#include <iomanip>



int main() {

	std::cout << "Type\t\tAddres\t\t      Bytes    Value\n\n";


	int varInt{ 50 };
	std::cout << typeid(varInt).name() << ":\t\t" << std::setw(16) << std::left << &varInt << "\t" << sizeof(varInt) << "   =   " << varInt << std::endl;

	short varShort{ 2 };
	std::cout << typeid(varShort).name() << ":\t\t" << std::setw(16) << std::left << &varShort << "\t" << sizeof(varShort) << "   =   " << varShort << std::endl;

	long varLong{ 1000L };
	std::cout << typeid(varLong).name() << ":\t\t" << std::setw(16) << std::left << &varLong << "\t" << sizeof(varLong) << "   =   " << varLong << std::endl;

	long long varLongLong{ 1000000LL };
	std::cout << typeid(varLongLong).name() << ":\t" << std::setw(16) << std::left << &varLongLong << "\t" << sizeof(varLongLong) << "   =   " << varLongLong << std::endl;

	float varFloat{ 23.56F };
	std::cout << typeid(varFloat).name() << ":\t\t" << std::setw(16) << std::left << &varFloat << "\t" << sizeof(varFloat) << "   =   " << std::fixed << std::setprecision(5) << varFloat << std::endl;

	double varDouble{ 124.5462 };
	std::cout << typeid(varDouble).name() << ":\t\t" << std::setw(16) << std::left << &varDouble << "\t" << sizeof(varDouble) << "   =   " << varDouble << std::endl;

	long double varLongDouble{ 25698.2564L };
	std::cout << typeid(varLongDouble).name() << ":\t" << std::setw(16) << std::left << &varLongDouble << "\t" << sizeof(varLongDouble) << "   =   " << varLongDouble << std::endl;

	bool varBool{ true };
	std::cout << typeid(varBool).name() << ":\t\t" << std::setw(16) << std::left << &varBool << '\t' << sizeof(varBool) << "   =   " << varBool << std::boolalpha << "(" << varBool << ")" << std::noboolalpha << std::endl;

	char varChar{ 'C' };
	std::cout << typeid(varChar).name() << ":\t\t" << std::setw(16) << std::left << static_cast<void*>(&varChar) << "\t" << sizeof(varChar) << "   =   " << varChar << std::endl;



	std::cout << "\n\n\n";
	return 0;
}










