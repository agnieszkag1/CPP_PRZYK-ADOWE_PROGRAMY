#include <iostream>
#include <cmath>

using namespace std;

double f1(double x)
{
    return 2*x;
}

double f2(double x)
{
    return 2*x+6;
}

double f3(double x)
{
    return x*x+2*x-5;
}

typedef double(* func)(double);

double calka(double a, double b, func f)
{
    int n = 1000;
    double suma = 0.0;

    for(int i = 0; i < n; i++)
    {
        suma += abs(a-b)/n * f(a+i*abs(a-b)/n);
    }
    return suma;
}

int main()
{
    cout << calka(0, 100, f1);

    return 0;
}
