#include <iostream>
#include <locale.h>
#include <cmath>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	double x, x1, x2, D;
	cout << "������� �������� a" << "\n"; 
	cin >> a; 
	cout << "������� �������� b" << "\n";
	cin >> b; 
	cout << "������� �������� c" << "\n";
	cin >> c;
	if (a == 0) {
		if (b == 0) {
			cout << "��� ������� ��� ��������� " << c << "=0";
		}
		else {
			x = (double) - 1 * c / b;
			cout << "������� ��������� " << b << "*x+" << c << "=0: x=" << x;
		}
	}
	else {
		if (b == 0) {
			if (c == 0) {
				cout << "������� ��������� " << a << "*x^2=0: x=0";
			}
			else {
				D = (double) -1 * c / a;
				if (D < 0) {
					cout << "x^2=-c/a=" << D << " - ������������� �����, ������� ���";
				}
				else {
					x1 = sqrt(D);
					x2 = -1 * sqrt(D);
					cout << "��������� " << a << "*x^2+" << c << "=0 ����� ��� �������: x1=" << x1 << ", x2=" << x2;
				}
			}
		}
		else {
			if (c == 0) {
				x = -1 * b / a;
				cout << "��������� " << a << "*x^2+" << b << "*x=x*(" << a << "*x+" << b << ")=0 ����� ��� �������: x1=0, x2=" << x;
			}
			else {
				D = pow(b, 2) - 4 * a * c;
				if (D < 0) {
					cout << "������������ " << D << " ������ 0, ������� ���";
				}
				else if (D == 0) {
					x = (double)-1 * b / (2 * a);
					cout << "������������ " << D << " ����� 0, ���� �������: x="<<x;
				}
				else {
					x1 = (double) (-1 * b + sqrt(D)) / (2 * a);
					x2 = (double) (-1 * b - sqrt(D)) / (2 * a);
					cout << "������������ ����� " << D << ", ��� �������: x1=" << x1 << ", x2=" << x2;
				}
			}
		}
	}
	return 0;
}