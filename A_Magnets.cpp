#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num;
    cin >> num;
    int arr[num];
    for(int i=0; i<num; i++)
    {
        cin >> arr[i];
    }

    int count =1;
    for(int i=1; i<num; i++)
    {
        if((arr[i]+arr[i-1]) == 11)
        count += 1;
    }

    cout << count;


return 0;
}