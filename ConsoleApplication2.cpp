#include <iostream>
using namespace std;
int main()
{
	const int a = 10;
	int b, c;
	b = a * 2;
	c = b--;
	cout << a << " " << b << " " << c;
}
