#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    long long int totalCost=0;
    for(int i=1; i<=c; i++)
    {
        totalCost += (i*a);
    }

    if(b>=totalCost)
    cout << "0";
    else
    cout << totalCost - b;


return 0;
}