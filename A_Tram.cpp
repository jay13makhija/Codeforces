#include<bits/stdc++.h>
using namespace std;

int main()
{

long long int t, count=0, max_count=INT_MIN;
cin >> t;
while(t--)
{
    long long int a, b;
    cin >> a >> b;

    count -= a; 
    count += b;

    max_count = max(max_count, count);
}

cout << max_count;
return 0;
}