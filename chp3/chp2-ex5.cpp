#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{

	/*

	//���簢��
	int greeting = 5;

	for (int w =  0; w < greeting; w++)
	{
		for (int h = 0; h < greeting; h++)
		{
			cout << "*";
		}
		cout << endl;
	}//for
	*/

	/*
	//���簢��
	int width = 5;
	int height = 4;

	for (int w = 0; w < width; w++)
	{
		for (int h = 0; h <height; h++)
		{
			cout << "*";
		}
		cout << endl;
	}
	*/

	//�ﰢ��
int width = 5;
int height = 5;

for (int w = 0; w < width; w++)
{
	for (int a = 0; a < w; a++)
	{
		cout << " ";
	}

	for (int a = 0; a < (2 * width) - 1 - (w * 2); a++)
	{
		cout << "*";
	}

	cout << endl;
}
return 0;
}
