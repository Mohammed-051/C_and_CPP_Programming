#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double a[128 * 1024];
int main()
{
    cout << fixed << setprecision(4);
    unsigned long long n;
    int mark  = 0, i=0;

    while (cin >> n && n!= EOF)
    {
        a[i++] = (double)sqrt(n);
        mark++;
    }
    for (int j = mark-1; j >=0; j-- )
    {
        cout << a[j] << endl;
    }
    return 0;
}
