#include <iostream>
#include <locale.h>
#include <cmath>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");

	int a, b, c;
	double x, x1, x2, D;
	cout << "Введите параметр a" << "\n"; 
	cin >> a; 
	cout << "Введите параметр b" << "\n";
	cin >> b; 
	cout << "Введите параметр c" << "\n";
	cin >> c;
	if (a == 0) {
		if (b == 0) {
			cout << "Нет решений для уравнения " << c << "=0";
		}
		else {
			x = (double) - 1 * c / b;
			cout << "Решение уравнения " << b << "*x+" << c << "=0: x=" << x;
		}
	}
	else {
		if (b == 0) {
			if (c == 0) {
				cout << "Решение уравнения " << a << "*x^2=0: x=0";
			}
			else {
				D = (double) -1 * c / a;
				if (D < 0) {
					cout << "x^2=-c/a=" << D << " - отрицательное число, решений нет";
				}
				else {
					x1 = sqrt(D);
					x2 = -1 * sqrt(D);
					cout << "Уравнение " << a << "*x^2+" << c << "=0 имеет два решения: x1=" << x1 << ", x2=" << x2;
				}
			}
		}
		else {
			if (c == 0) {
				x = -1 * b / a;
				cout << "Уравнение " << a << "*x^2+" << b << "*x=x*(" << a << "*x+" << b << ")=0 имеет два решения: x1=0, x2=" << x;
			}
			else {
				D = pow(b, 2) - 4 * a * c;
				if (D < 0) {
					cout << "Дискриминант " << D << " меньше 0, решений нет";
				}
				else if (D == 0) {
					x = (double)-1 * b / (2 * a);
					cout << "Дискриминант " << D << " равен 0, одно решение: x="<<x;
				}
				else {
					x1 = (double) (-1 * b + sqrt(D)) / (2 * a);
					x2 = (double) (-1 * b - sqrt(D)) / (2 * a);
					cout << "Дискриминант равен " << D << ", два решения: x1=" << x1 << ", x2=" << x2;
				}
			}
		}
	}
	return 0;
}