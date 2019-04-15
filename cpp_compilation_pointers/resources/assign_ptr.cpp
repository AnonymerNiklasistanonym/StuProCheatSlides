#include <iostream>

int main()
{
	int var = 8; // Any other kind of variable type works too
	std::cout << "Memory address &var: " << &var << std::endl;

	void* ptr4 = &var; // This memory address can be assigned to a ptr
	std::cout << "Memory address ptr4 (same): " << ptr4 << std::endl;

	// The pointer can be casted to suggest it points to a double value
	double* ptr5 = (double*)&var; // Double ptr has the same mem address
	std::cout << "Memory address ptr5 (same): " << ptr5 << std::endl;
}