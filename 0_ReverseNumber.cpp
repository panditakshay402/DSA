

#include <vector>
#include <iostream>

using namespace std;
vector<int> reverseNum(const vector<int> &v)
{
    vector<int> result;
    for (int i = 0; i < v.size(); i++)
    {
        int ognum = v[i];
        int rev = 0;
        while (ognum > 0)
        {
            int digit = ognum % 10;
            rev = (rev * 10) + digit;
            ognum = ognum / 10;
        }
        result.push_back(rev);
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int x = 0;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans = reverseNum(v);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }
}