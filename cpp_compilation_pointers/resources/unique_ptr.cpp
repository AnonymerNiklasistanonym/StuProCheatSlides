#include <iostream>
#include <memory>
#include "ExampleClass.h" // This file is called "unique_ptr.cpp"

int main()
{
	std::cout << "Before scope #1" << std::endl;
	{
		std::cout << "Begin scope #1" << std::endl;
		std::unique_ptr<ExampleClass> uniquePtr =
			std::make_unique<ExampleClass>();
		uniquePtr->Print();
		std::cout << "End scope #1" << std::endl;
	} // Destructor will be called right here
	std::cout << "After scope #1" << std::endl;
}