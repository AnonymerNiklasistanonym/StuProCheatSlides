#include <iostream>

template <typename T>
void PrintTemplate(T value)
{
	std::cout << value << std::endl;
}

int main()
{
	PrintTemplate(5);
	// It works mostly without explicit types but with is better
	PrintTemplate<int>(5);
	PrintTemplate<float>(5.4f);
	PrintTemplate<std::string>("Hello cooler");
}