#include<iostream>
#include<vector>
using namespace std;

void count_num(vector<int> &v)
{   
    for(int i = 0; i < v.size(); i++)
    {
        int num = v[i];
        int count = 0;

        if(num == 0) count = 1;

        while(num > 0)
        {
            num = num / 10;
            count++;
        }

        cout << count << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    vector<int> v;

    for(int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    count_num(v);
}