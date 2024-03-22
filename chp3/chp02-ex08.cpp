#include <iostream>
#include <string>

int main() {
	int i = 0;
	int a = 1;
	while (i < 9)
	{
		i += 1;
		a *= i;
		std::cout << a << std::endl;
	}
	return 0;
}