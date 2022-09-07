#include <bits/stdc++.h>
using namespace std;

void palindrome(string, int, int);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        palindrome(s, 0, s.length()-1);
    }
}

void palindrome(string s, int i, int j)
{
    if (i > j)
    {
        cout << "Yes" << "\n";
        return;
    }

    if (s[i] != s[j])
    {
        cout << "No" << "\n";
        return;
    }

    palindrome(s, i+1, j-1);

}