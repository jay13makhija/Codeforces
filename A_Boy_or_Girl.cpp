#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int count=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!=str[i+1])
        count++;
    }
    if(count%2 != 0)
    cout << "IGNORE HIM!";
    else
    cout << "CHAT WITH HER!";


    return 0;
}