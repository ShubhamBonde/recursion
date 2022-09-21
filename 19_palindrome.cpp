#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int l, int r)
{
    if(l>=r) return true;
    if (s[l] != s[r]) return false;
    isPalindrome(s, l+1, r-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    //Test Cases
    while(t--)
    {
        string s;
        cin >> s;
        if (isPalindrome(s, 0, s.size()-1)) cout << "Yes\n";
        else cout << "No\n";
    }
}