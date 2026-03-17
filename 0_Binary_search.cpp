#include<vector>
#include<iostream>
using namespace std;

int bs(vector<int> &v,int key)
{
    int l,r,k=key;
    l=0,r=v.size()-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]==k)
        return m;
        v[m]<k?l=m+1:r=m-1;
    }
    return -1;

}

int main()
{   
    int key,n;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cin>>key;

    cout<<bs(v,key);
}
