#include <iostream>
#include "ExampleClass.h"

ExampleClass::ExampleClass()
{
	std::cout << "Contructor was called"
	          << std::endl;
}
ExampleClass::~ExampleClass()
{
	std::cout << "Destructor was called"
	          << std::endl;
}
void ExampleClass::Print()
{
	std::cout << "Print method was called"
	          << std::endl;
}