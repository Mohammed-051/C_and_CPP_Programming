#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int x, y, i,j, t;

    while (cin>> x )
    {
        j= 0;
        t = 0;
        for(i=0; i<60; i++)
        {
            if(i%5 == 0) j++;
            y = (i*6 - j*6);
            if (x == y)
            {
                t = 1;
                break;
            }
        }

        if(t == 1)
            cout<< "Y" << endl;

        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
