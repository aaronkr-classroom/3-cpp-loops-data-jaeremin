#include <iostream>
#include <string>
using std::cin; using std::endl;
using std::cout; using std::string;
int main() {

	int a;
	int b;
	cout << "���� ���ڸ��� ���ÿ�: ";
	
	cin >> a >> b;
	if (a > b)
	{
		cout << "a�� b���� ũ��" << endl;
	}
	if (a < b)
	{
		cout << "b�� a���� ũ��" << endl;
	}
	return 0;
}