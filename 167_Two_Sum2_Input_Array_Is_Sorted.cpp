#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    // cout<<"enter lenght of arr ";
    cin>>x;

    int numbers[x];
    // cout<<"enter arr val ";
    for(int i=0;i<x;i++)
    {
        cin>>numbers[i];
    }

    int target;
    // cout<<"enter target ";
    cin>>target;

    int left = 0;
    int right = x - 1;

    while(left < right)
    {
        int sum = numbers[left] + numbers[right];

        if(sum == target)
        {
            cout<<"index1 = "<<left+1<<" index2 = "<<right+1;
            break;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return 0;
}