#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");

	int p, t;
	float s;
	cout << "������� ��������� ������ ���������:" << "\n";
	cin >> p;
	cout << "������� ������������ ��������� � �������" << "\n";
	cin >> t; 
	if (t > 5) {
		s = 5 * p + (t - 5) * p * 0.8;
	}
	else {
		s = t * p;
	}
	cout << "��������� " << t << " ����� ��������� �� ���� " << p << " �� ������: " << s;

	return 0;
}
