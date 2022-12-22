#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num, count =0;
    cin >> num;
    while(num--)
    {
        long long int a,b;
        cin >> a >> b;
        if(b-a >= 2)
        count++;
    }
    
    cout << count;

return 0;
}