#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, i, j;
    long long int fatorial_a = 1, fatorial_b = 1, soma_fatorial = 0;
    while (cin >> a)
    {
        cin >> b;
        if (a == 0)
        {

        }
        else
        {
            for (i = 1; i <= a; i++)
            {
                fatorial_a = fatorial_a * i;
            }
        }
        if (b == 0)
        {

        }
        else
        {
            for (j = 1; j <= b; j++)
            {
                fatorial_b = fatorial_b * j;
            }
        }
        soma_fatorial = fatorial_a + fatorial_b;
        cout << soma_fatorial <<endl;
        i = 1;
        i = 1;
        fatorial_a = 1;
        fatorial_b = 1;
    }
    return 0;
}
