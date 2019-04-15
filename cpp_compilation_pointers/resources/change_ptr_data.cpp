#include <iostream>

int main()
{
	int var = 8;
	
	void* ptr6 = &var; // The following line results in an error because
	// *ptr6 = 10;     // we said the pointer points to void (not an int)

	int* ptr7 = &var; // Point to an integer with an int pointer
	std::cout << "ptr7: " << *ptr7 << ", var" << var << std::endl;

	// Dereference pointer using the leading * (*POINTER)
	*ptr7 = 20; // The data will change var, because it points to it:
	std::cout << "ptr7: " << *ptr7 << ", var" << var << std::endl;
}