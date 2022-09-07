#include<bits/stdc++.h>
using namespace std;
unordered_map<int, string> spells;

string ret_spell(int n, string sol)
{   
    // write recursive code here.
    cout << n%10 << endl;

    if (n/10 == 0)
    {
        sol.insert(0, spells[n]);
        cout << sol << endl;
        return sol;
    }

    sol.insert(0, spells[n%10]);
    ret_spell(n/10, sol);


}

int main()
{
    spells[0] = "zero"; spells[1] = "one"; spells[2] = "two"; spells[3] = "three"; spells[4] = "four"; spells[5] = "five"; spells[6] = "six"; spells[7] = "seven"; spells[8] = "eight"; spells[9] = "nine";
    int n;
    cin >> n;
    cout << ret_spell(n, "");

}