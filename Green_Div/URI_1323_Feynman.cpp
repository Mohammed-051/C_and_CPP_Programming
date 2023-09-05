#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;

    while (cin >> n && n)
    {
        long long int sum = 0;
        sum = (n*(n+1)*(2*n+1))/6;
        cout << sum <<endl;
    }

    return 0;
}
