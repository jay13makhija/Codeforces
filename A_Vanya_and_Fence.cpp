#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, fence_hight;
    cin >> num >> fence_hight;

    int arr[num];
    int count = num;
    for(int i=0; i<num; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<num; i++)
    {
        if(arr[i]>fence_hight)
        count += 1;
    }

    cout << count;

return 0;
}