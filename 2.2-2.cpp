#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");	
	int a, b;
	cout << "������� ������ �����" << "\n";
	cin >> a; //3
	cout << "������� ������ �����" << "\n";
	cin >> b; //7
	if (a < b) {
		if (a % 2 == 0) {
			cout << a << " - ���������� �����, ������";
		}
		else {
			cout << a << " - ���������� �����, ��������";
		}
	}
	else if (a == b) {
		if (a % 2 == 0) {
			cout << "����� �����, ������";
		}
		else {
			cout << "����� �����, ��������";
		}
	}
	else {
		if (b % 2 == 0) {
			cout << b << " - ���������� �����, ������";
		}
		else {
			cout << b << " - ���������� �����, ��������";
		}
	}
	return 0;

}