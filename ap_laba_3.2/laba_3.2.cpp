// Lab_03_2.cpp
// ����� �������
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 12

#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < 0.6 && b + c != 0)
		F = a * pow(x, 2) + pow(b, 2) + c;
	if (x > 0.6 && b + c == 0)
		F = (x - a) / (x - c);
	if (!(x < 0 && b + c != 0) && !(x > 0 && b + c == 0))
		F = (x / c) + (x / a);

	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2: ������������ � ����� ����
	if (x < 0.6 && b + c != 0)
		F = a * pow(x, 2) + pow(b, 2) + c;
	else 
		if (x > 0.6 && b + c == 0)
			F = (x - a) / (x - c);
		else
			F = (x / c) + (x / a);

	cout << "2) F = " << F << endl;
	cin.get();
	return 0;

}
