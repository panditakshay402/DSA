#include <iostream>
#include <string>
#include <stack>

#include <unordered_map>

using namespace std;

bool validpara(string s)
{
    stack<char> st;
    unordered_map<char, char> mp = {{'[', ']'},
                                    {'(', ')'},
                                    {'{', '}'}};
    for (char ch : s)
    {
        if (ch == '{' || ch == '(' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (st.empty() || mp[st.top()]!=ch)
            {
                return 0;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin >> s;
    if (validpara(s))
    {
        cout << "valid";
    }
    else
    {
        cout << "not valid";
    }
    return 0;
}
