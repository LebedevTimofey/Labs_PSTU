#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	float g, v;
	cout << "Введите количество галлонов";
	cin >> g;
	v = g/7.481;
	cout << v;

}
