#include<bits/stdc++.h>
using namespace std;

int main()
{

int num, temp;
cin >> num;
int arr[num];
for (int i = 0; i < num; i++)
{
    cin >> temp;
    arr[temp-1]=(i+1);
}

for(int i=0; i<num; i++)
{
    cout << arr[i] << " ";
}

return 0;
}