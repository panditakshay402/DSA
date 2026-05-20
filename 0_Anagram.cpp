#include <iostream>
#include <string>

using namespace std;
bool anagram(string s1, string s2)
{
    if (s1.length() != s2.length())

        return 0;

    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)

            return 0;
    }

    return 1;
}

int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    if (anagram(s1, s2))
    {
        cout << "Anagram";
    }
    else
    {
        cout << "not Anagram";
    }
}
