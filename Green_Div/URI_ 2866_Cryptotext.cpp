#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        string a;
        string b="";
        for(int i = 0; i<n; i++)
        {
            cin >> a;
            for (int j = 0; j < a.length(); j++)
            {
                if (a[j] >= 'a' && a[j] <= 'z')
                {
                    b+=(a[j]);
                }
            }
            reverse(b.begin(), b.end());


            cout << b;
            cout << endl;
            b.clear();
        }
    }

    return 0;
}
