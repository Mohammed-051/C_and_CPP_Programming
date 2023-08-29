#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i = 1, sum =0;
    char c[100];
    while(1)
    {
        cin.getline(c,100);
        if (strcmp(c, "---") == 0) sum +=0;
        else if (strcmp(c, "--*") == 0) sum +=1;
        else if(strcmp(c, "-*-") == 0) sum +=2;
        else if(strcmp(c, "-**") == 0) sum +=3;
        else if(strcmp(c, "*--") == 0) sum+=4;
        else if(strcmp(c, "*-*") == 0) sum+=5;
        else if(strcmp(c, "**-") == 0) sum+=6;
        else if(strcmp(c, "***") == 0) sum+=7;
        else if (strcmp(c ,"caw caw")== 0)
        {
            cout << sum << endl;
            sum = 0;
            i++;
            if(i>= 4)break;
        }

    }
    return 0;
}
