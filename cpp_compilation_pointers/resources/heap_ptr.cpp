int main()
{
	// Allocate memory of the size of 8 chars on the heap
	char* buffer = new char[8];
	// buffer now holds a mem address to the first byte of this memory

	// With `memset(pointer, data, sizeOfData)` this mem block can 
	memset(buffer, 0, 8); // easily be filled, in this case with zeros

	// To free the memory we allocated we use `delete` for variables
	delete[] buffer; // and `delete[]` for arrays, the freed memory
	// can now be reused, the data is gone and only scrambled bits
}