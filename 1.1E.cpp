// Реализация алгоритма Евклида по книге "Искусство программирования т.1"
// стр. 28-31

#include <iostream>

using namespace std;

int main() {
	int m, n, r;

	cout << " > Введите первое число: ";
	cin >> m;
	cout << " > Введите второе число: ";
	cin >> n;

	if (m < n) {
		m = m + n;
		n = m - n;
		m = m - n;
	}

	for (;;) {
		r = m % n;
		if (r == 0)
			break;
		m = n;
		n = r;
	}

	cout << " > Наибольший делитель: " << n << endl;
	return 0;	
}