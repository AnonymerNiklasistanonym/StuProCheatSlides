#include <iostream>
#include <string>

template <typename TYPE, unsigned int LENGTH>
class ArrayCool
{
  private:
	TYPE m_array[LENGTH];

  public:
	int GetSize() const { return LENGTH; }
};

int main()
{
	// Array of floats with the length of 20000
	ArrayCool<float, 20000> array2;
	std::cout << array2.GetSize() << std::endl;
}