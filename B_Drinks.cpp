#include<bits/stdc++.h>
using namespace std;

int main()
{

int num;
cin >> num;

double arr[num];
for(int i=0; i<num; i++)
{
    cin >> arr[i];
}

double sum=0;

for(int i=0; i<num; i++)
{
    sum += arr[i];
}

cout << sum/num;

return 0;
}