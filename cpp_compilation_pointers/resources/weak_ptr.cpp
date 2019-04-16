#include <iostream>
#include <memory>
#include "ExampleClass.h" // This file is called "weak_ptr.cpp"

int main()
{
	std::weak_ptr<ExampleClass> weakPtr;
	std::cout << "I References weakPtr: " << weakPtr.use_count()
	          << ", expired: " << weakPtr.expired() << std::endl;
	std::cout << "Before scope #3.1" << std::endl;
	{
		std::cout << "Begin scope #3.1" << std::endl;
		std::shared_ptr<ExampleClass> sharedPtr =
		    std::make_shared<ExampleClass>();
		std::cout << "I References sharedPtr: "
		          << weakPtr.use_count() << std::endl;
		std::shared_ptr<ExampleClass> copiedSharedPtr = sharedPtr;
		std::cout << "I References sharedPtr: "
		          << sharedPtr.use_count() << std::endl;
		weakPtr = sharedPtr;
		std::cout << "II References sharedPtr: "
		          << sharedPtr.use_count() << std::endl;
		std::cout << "II References weakPtr: "
		          << weakPtr.use_count() << ", expired: "
		          << weakPtr.expired() << std::endl;
	} // Destructor is called, because there are no references any more
	std::cout << "After scope #3.1" << std::endl;
	std::cout << "III References weakPtr: " << weakPtr.use_count()
	          // Is expired, because the shared pointers are gone
	          << ", expired: " << weakPtr.expired() << std::endl;
}