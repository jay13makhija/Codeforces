#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    while(test--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int time_b, time_a=0;
        if(c>b)
        {
            time_b = ((c-b)+ (c-1));
        }
        else if(b>c)
        {
            time_b = (b-1);
        }
        if(a!=1)
        {
            time_a = (a-1);
        }

        if(time_b > time_a)
        {
            cout << "1" << endl;
        }
        else if(time_a > time_b)
        {
            cout << "2" << endl;
        }
        else 
        {
            cout << "3" << endl;
        }
    }
}