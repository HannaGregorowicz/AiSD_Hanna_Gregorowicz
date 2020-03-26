#include <iostream>

double f(double x) {
	return x*x-2;
}

double bisekcja(double a, double b) {
	double srodek;
	for (int i = 0; i < 20; i++) {
		srodek = (a + b) / 2;
		if (f(srodek)*f(a) < 0)
			a = srodek;
		else
			b = srodek;
		if (srodek == a || srodek == b)
			return srodek;
	}
	return srodek;
}


int main()
{
    std::cout << bisekcja(-3,4);
    return 0;
}