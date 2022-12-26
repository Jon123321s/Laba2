#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");	
	int a, b;
	cout << "¬ведите первое число" << "\n";
	cin >> a; //3
	cout << "¬ведите второе число" << "\n";
	cin >> b; //7
	if (a < b) {
		if (a % 2 == 0) {
			cout << a << " - наименьшее число, четное";
		}
		else {
			cout << a << " - наименьшее число, нечетное";
		}
	}
	else if (a == b) {
		if (a % 2 == 0) {
			cout << "„исла равны, четные";
		}
		else {
			cout << "„исла равны, нечетные";
		}
	}
	else {
		if (b % 2 == 0) {
			cout << b << " - наименьшее число, четное";
		}
		else {
			cout << b << " - наименьшее число, нечетное";
		}
	}
	return 0;

}