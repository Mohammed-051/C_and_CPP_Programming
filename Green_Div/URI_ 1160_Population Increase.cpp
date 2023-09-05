#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        int p1,p2;
        double pr1,pr2;
        for(int i = 0; i<n; i++)
        {
            cin >> p1 >> p2 >> pr1 >>pr2;
            int cnt =0;
            bool cen=false;

            while(p1<=p2)
            {
                p1 += (p1*pr1)/100;
                p2 += (p2*pr2)/100;
                cnt ++;
                if(cnt >100)
                {
                    cen = true;
                    break;
                }
            }
            if(cen== false)
                cout << cnt<<" anos." << endl;
            else
                cout <<"Mais de 1 seculo."  << endl;

        }
    }

    return 0;
}
