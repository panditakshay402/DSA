/*
------------------------------------------------------------
Program: Check if Two Strings are Anagrams

Definition:
Two strings are called Anagrams if they contain the same
characters with the same frequency, but the order of
characters can be different.

Approach:
1. If the lengths of both strings are different, return false.
2. Create a frequency array of size 26 (for lowercase letters).
3. Traverse both strings together:
   - Increment count for characters of first string.
   - Decrement count for characters of second string.
4. If every frequency becomes 0, both strings are anagrams.
   Otherwise, they are not.

Time Complexity : O(n)
Space Complexity: O(1)

Example 1:
Input:
listen
silent

Output:
Anagram

Example 2:
Input:
hello
world

Output:
not Anagram

Note:
This program works only for lowercase English letters (a-z).
------------------------------------------------------------
*/


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
