#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (tolower(s[i]) != tolower(s[j]))
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main()
{
    string s;
    getline(cin, s);
    s.erase(remove_if(s.begin(), s.end(), ::ispunct), s.end());
    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

    if (ispalindrome(s))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}