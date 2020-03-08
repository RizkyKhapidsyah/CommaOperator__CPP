#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void PrintData(int Val) 
{
	cout << Val << endl;

}

int main()
{
	int A, B, C;

	A = (B = 4, PrintData(B), C = 6, PrintData(C), (B + C));

	cout << "A = " << A << endl;

	_getch();
	return 0;
}