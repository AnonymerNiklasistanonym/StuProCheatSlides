void goodSwap(SomeClass& arg1, SomeClass& arg2) {
	SomeType temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

int main() {
	SomeClass var1; // Object of a class one
	SomeClass var2; // Object of a class two
	goodSwap(var1, var2); // swaps their values!
}