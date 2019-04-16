// This function declaration can be read:
// "This symbol/function exists" and
// below/externally there is a definition
void log(const char* message);

// Main function
int main()
{
	// log needs to be declared
	// above the function call!
	log("Hello World!");
}
