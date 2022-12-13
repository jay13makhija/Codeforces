#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int uper=0, lower=0;
    for(int i=0; i<str.length(); i++)
    {
        if(isupper(str[i]))
        uper++;
        else
        lower++;
    }
    if(uper>lower)
    {
        for(int i=0; i<str.length(); i++)
        {
            str[i]=toupper(str[i]);
        }
    }
    else
    {
        for(int i=0; i<str.length(); i++)
        {
            str[i]=tolower(str[i]);
        }
    }

    cout << str;

return 0;
}