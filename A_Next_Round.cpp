#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, counter=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(int j=0; j<n; j++)
    {
        if((arr[j] > 0) && (arr[j]>=arr[k-1]))
        {counter += 1;}
    }
    cout << counter;
}