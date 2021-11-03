#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	short int h1, m1, s1, h2, m2, s2, r1, r2, raz, h3, m3, s3;
	cout « "введите значения начала промежутка ";
	cin » h1 » m1 » s1;
	cout « "введите значения конца промежутка ";
	cin » h2 » m2 » s2;
	r1 = s1 + m1 * 60 + h1 * 3600;
	r2 = s2 + m2 * 60 + h2 * 3600;
	raz = r2 - r1;
	h3 = raz / 3600;
	m3 = (raz - (h3 * 3600)) / 60;
	s3 = raz - ((m3 * 60) + (h3 * 3600));
	cout « h3 « " " « m3 « " " « s3;

}
