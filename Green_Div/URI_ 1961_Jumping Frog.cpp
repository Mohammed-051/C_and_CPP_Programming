#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p,n;

    while (cin >> p >> n)
    {
        int a[n];
        bool con = false;
        cin >> a[0];
        for(int i = 1; i<n; i++)
        {
            cin >> a[i];
            int cp = abs(a[i]-a[i-1]);
            if(cp > p)
            {
                con = true;
                break;
            }

        }
        if (con == false)
            cout << "YOU WIN" <<endl;
        else
            cout << "GAME OVER" <<endl;

        con = false;
    }

    return 0;
}
