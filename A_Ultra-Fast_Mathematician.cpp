#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    string str_ans = "";
    for(int i=0 ; i<str1.length(); i++)
    {
        if(str1[i] == str2[i])
        {
            str_ans += '0';
        }
        else
        str_ans += '1';
    }

    cout << str_ans;


return 0;
}