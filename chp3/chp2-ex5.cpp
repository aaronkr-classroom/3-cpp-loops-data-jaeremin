#include <iostream>
#include <string>

using std::cin; using std::endl;
using std::cout; using std::string;

int main()
{

	/*

	//정사각형
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
	//직사각형
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

	//삼각형
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
