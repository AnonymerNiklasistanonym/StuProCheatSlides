int main()
{
	void* ptr = 0;
	// 0 is not an valid memory address => pointer is not valid
	// it can also be written like this:
	void* ptr2 = NULL; // NULL is defined as 0
	// it can also be written like this since c++11:
	void* ptr3 = nullptr;
	// we created a (useless, ) typless null pointer
}