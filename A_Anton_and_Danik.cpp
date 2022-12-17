#include<bits/stdc++.h>
using namespace std;

int main()
{

int num;
cin >> num;
string str;
cin >> str;
int a=0, d=0;
for(int i=0; i<num; i++)
{
    if(str[i]=='D')
    d++;
    else
    a++;
}

if(d>a)
cout << "Danik";
else if(a>d)
cout << "Anton";
else
cout << "Friendship";

return 0;
}