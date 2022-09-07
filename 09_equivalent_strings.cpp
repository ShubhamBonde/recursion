#include <bits/stdc++.h>
using namespace std;

// Least lexicographical string equivalence.
string least_lex(string s)
{
        if (s.size() == 1) return s;
        string x = least_lex(s.substr(0, s.size()/2));
        // cout << "x : " << x << endl;
        string y = least_lex(s.substr(s.size()/2));
        // cout << "Y : " << y << endl;
        return min(x+y, y+x);
}


void equivalent_str(string a, string b)
{
    if (least_lex(a) == least_lex(b)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main()
{
    string a, b;
    cin >> a >> b;
    equivalent_str(a, b);
}




