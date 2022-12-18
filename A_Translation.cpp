#include<bits/stdc++.h>
using namespace std;

int main()
{

string str, str2, str_rev="";
cin >> str >> str2;
for(int i=str.length()-1; i>=0; i--)
{
    str_rev += str[i];
}

if(str_rev == str2)
cout << "YES";
else
cout << "NO";
return 0;
}