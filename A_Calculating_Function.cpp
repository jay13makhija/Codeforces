#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num, count=0;
    cin >> num;
    if(num%2 == 0)
    count = num/2;
    else
    count = ((num+1)/2) * (-1);

    cout << count;

return 0;
}