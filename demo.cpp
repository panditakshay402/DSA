// 6
// 12 35 1 10 34 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void secondThirdLargest(vector<int> v)
{
    sort(v.begin(), v.end());

    int n = v.size();
    int largest = v[n - 1];
    int second = -1, third = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] != largest)
        {
            second = v[i];
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] != largest && v[i] != second)
        {
            third = v[i];
            break;
        }
    }

    cout <<second << endl;
    cout <<third << endl;
}

int main()
{
    vector<int> v;
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    secondThirdLargest(v);
}