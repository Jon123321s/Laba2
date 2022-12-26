#include <iostream>
#include <locale.h>

int main() {
	using std::cout;
	using std::cin;
	setlocale(LC_ALL, "Russian");

	int p, t;
	float s;
	cout << "¬ведите стоимость минуты разговора:" << "\n";
	cin >> p;
	cout << "¬ведите длительность разговора в минутах" << "\n";
	cin >> t; 
	if (t > 5) {
		s = 5 * p + (t - 5) * p * 0.8;
	}
	else {
		s = t * p;
	}
	cout << "—тоимость " << t << " минут разговора по цене " << p << " за минуту: " << s;

	return 0;
}
