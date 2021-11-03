#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	double c, f;
	cout << "Введите градусы по Фаренгейту";
	cin >> f;
	c = 5.0 / 9 * (f - 32);
	cout << c;
}
