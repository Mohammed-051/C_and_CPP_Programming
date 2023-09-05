#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j ,k ,n;
    int arr[10000];
     while(cin >>k &&k )
     {
         n = 0;
         for(i = 1; i<=k; i+=2)
         {
             n +=i;
             if(n>k)break;
             if(i >1) cout << " ";
             cout << n;
         }
         cout << endl;
     }
    return 0;
}
