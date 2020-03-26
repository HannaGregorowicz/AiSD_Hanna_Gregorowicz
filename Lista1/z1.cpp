#include <iostream>

int pow(int x, int n)        // Rekurencyjnie
{
    int wynik = x;
    if ( n==0 ) {
        return 1;
    } 
    while ( n>=1 )
    {
       if( n%2 == 0 )        //Parzyste
        {
            wynik *= wynik;
            if ( n-2 == 0 ) {
                return wynik;
            }
            return pow(wynik, n/2);
        }

        if( n%2 == 1 )      //Nieparzyste
        {
            wynik = pow(x, n-1);
            wynik *= x;
            return wynik;
        }
    }
}


int pow1(int x, int n) {     // Bez rekurencji
    double wynik = 1.0;
    while ( n>0 ) {
        if ( n%2 == 1 ) {
            wynik = x * wynik;
        }
        x = x*x;
        n = n>>1;
    }
    return wynik;
}

int main()
{
    std::cout << pow(3,4) << std::endl;
    std::cout << pow1(3,4) << std::endl;

    return 0;
}