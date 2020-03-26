#include <iostream>

//a0 + a1x + a2x2 + ...

double oblicz (double a[], int n, double x) {
    double wynik = a[0];
	int i = 1;
	while (i <= n) {
		wynik = wynik * x + a[i];
		i++;
	}
	return wynik;
}

int main()
{
    double x = 2;
	double a[] = {1, 1, 1, 1, 1};
	int n = (sizeof(a)/sizeof(a[0]))-1;

    std::cout <<oblicz(a, n, x)<< "\n"; 
    return 0;
}