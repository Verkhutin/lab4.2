#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x, y, x1, x2, dx, A, B;

	cout << "x1 = "; cin >> x1;
	cout << "x2 = "; cin >> x2;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = x1;
	for (x; x <= x2; x += dx) {
		A = 2 / x + fabs(x);
		if (x < 0)
			B = 1 + 4 * x * x;
		else
			if (x >= 0 && x <= 2)
				B = pow((exp(x) + fabs(x)), 2);
			else
				B = 5 * sin(1. * (x * x + 1));

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		
	}
	cout << "---------------------------" << endl;
}