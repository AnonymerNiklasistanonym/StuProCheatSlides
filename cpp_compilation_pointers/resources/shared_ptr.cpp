#include <iostream>
#include <memory>
#include "ExampleClass.h" // This file is called "shared_ptr.cpp"

int main()
{
	std::cout << "Before scope #2.1" << std::endl;
	{
		std::cout << "Begin scope #2.1" << std::endl;
		std::shared_ptr<ExampleClass> outsideSharedPtr;
		std::cout << "I References outsideSharedPtr: "
		          << outsideSharedPtr.use_count() << std::endl;
		std::cout << "Before scope #2.2" << std::endl;
		{
			std::cout << "Begin scope #2.2" << std::endl;
			std::shared_ptr<ExampleClass> sharedPtr =
			    std::make_shared<ExampleClass>();
			std::cout << "I References sharedPtr: "
			          << sharedPtr.use_count() << std::endl;
			std::shared_ptr<ExampleClass> copiedSharedPtr =
			    sharedPtr;
			std::cout << "II References sharedPtr: "
			          << sharedPtr.use_count() << std::endl;
			outsideSharedPtr = sharedPtr;
			std::cout << "III References sharedPtr: "
			          << sharedPtr.use_count() << std::endl;
			std::cout << "II References outsideSharedPtr: "
			          << outsideSharedPtr.use_count()
			          << std::endl;
			std::cout << "End scope #2.2" << std::endl;
		}
		std::cout << "After scope #2.2" << std::endl;
		std::cout << "III References outsideSharedPtr: "
		          << outsideSharedPtr.use_count() << std::endl;
		std::cout << "End scope #2.1" << std::endl;
	} // Destructor is called, because there are no references any more
	std::cout << "After scope #2.1" << std::endl;
}