int slowIncrement(int value) // value is copied (pass-by-value)
{
	return ++value; // slower, execute function + assign the new value
} // -> "oldVar = slowIncrement(oldVar);"
void fasterIncrement(int* value) // memory address to value is copied
{
	// the paranthesis are important because we first need to
	(*value)++; // dereference value to write to its memory
	// No return/assignment is needed thanks to the pointer
} // -> "fasterIncrement(&oldVar);"
void fasterAndMoreReadableIncrement(int& value) //  (pass-by-reference)
{
	value++; // Is the same as fasterIncrement, but much cleaner
} // -> "fasterAndMoreReadableIncrement(oldVar);"