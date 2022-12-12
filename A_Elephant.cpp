#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count=0;
    while(num>5)
    {
        num-=5;
        count++;
    }
    cout << count+1;


return 0;
}