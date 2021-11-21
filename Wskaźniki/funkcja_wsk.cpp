#include <iostream>

using namespace std;

void tab(int* tab, int n)
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = i+1;
    }
}

int main()
{
    int n = 10;
    int t[n];

    tab(t, n);

    cout << t[2];

    return 0;
}
