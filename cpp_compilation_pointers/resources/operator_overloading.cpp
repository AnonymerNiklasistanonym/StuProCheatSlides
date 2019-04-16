#include <iostream>

struct Example
{
	Example(float a, float b) : x(a), y(b) {}
	float x, y;
	void Print() { std::cout << x << ',' << y << '\n'; }
	Example Add(const Example &other) {
		return Example(x + other.x, y + other.y);
	}
	Example Divide(const Example &other) {
		return Example(x / other.x, y / other.y);
	}
	Example Multiply(const Example &other) {
		return Example(x * other.x, y * other.y);
	}
	Example operator+(const Example &other) { return Add(other); }
	Example operator*(const Example &other) { return Multiply(other); }
	Example operator/(const Example &other) { return Divide(other); }
	float operator[](const int &index) { return x + y; }
	float& operator[](const bool &index) { return index ? x : y; }
};

std::ostream& operator<<(std::ostream& stream, const Example& example)
{
	return stream << "x: " << example.x << ", y: " << example.y;
}

int main()
{
	Example e1(1.0f, 2.0f);
	std::cout << e1 << std::endl; // "x: 1, y: 2"
	Example e2(2.0f, 1.0f);
	e1.Print();  // "1,2"
	e2[true] = 4.0f;
	std::cout << e2[true] << std::endl; // "4"
	Example newExample = e1 + e2;
	newExample.Print(); // "5,3"
	std::cout << newExample[1] << std::endl; // "8"
}
