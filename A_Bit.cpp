#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, count=0;
    string str;
    cin >> num;
    while(num--)
    {
        cin >> str;
        if((str=="++X") || (str=="X++"))
        {
            count += 1;
        }
        else
        {
            count -= 1;
        }
    }
    cout << count;
}