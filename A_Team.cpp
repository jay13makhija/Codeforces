#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, counter=0;
    cin >> t;
    while(t--)
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        if((p1+p2+p3)>=2)
        {
            counter += 1;
        }
    }
    cout << counter;
}