#include<bits/stdc++.h>
using namespace std;
string powerset(string s, int i, string op)
{
    if (i == s.size()) {
        cout << op << endl;
        return op;
    }
    
    powerset(s, i+1, op+s[i]);
    powerset(s, i+1, op);

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
        powerset(s, 0, "");
    }
}