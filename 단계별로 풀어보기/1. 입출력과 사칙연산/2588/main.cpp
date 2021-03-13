#include <iostream>
#include <string>

int main()
{
	int A, B, b1, b10, b100;
	std::cin >> A >> B;
	b1 = B % 10;
	b10 = (B % 100 - B % 10) / 10;
	b100 = (B - b1 - b10) / 100;
	std::cout << A * b1 << std::endl
		<< A * b10 << std::endl
		<< A * b100 << std::endl
		<< A * B << std::endl;
}