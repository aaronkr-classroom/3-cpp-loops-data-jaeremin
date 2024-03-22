#include <iostream>
#include <string>
using std::cin; using std::endl;
using std::cout; using std::string;
int main() {

	int a;
	int b;
	cout << "숫자 두자리를 쓰시오: ";
	
	cin >> a >> b;
	if (a > b)
	{
		cout << "a가 b보다 크다" << endl;
	}
	if (a < b)
	{
		cout << "b가 a보다 크다" << endl;
	}
	return 0;
}