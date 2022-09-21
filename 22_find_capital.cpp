#include <bits/stdc++.h>
using namespace std;

void findCapital(string s, int i)
{

  if (s[i] >= 'A' && s[i] <= 'Z')
  {
    cout << i << endl;
    return;
  }

  if (i > s.length()) {
    cout << "-1" << endl; 
    return;
  }
  findCapital(s, i+1);
}

int main()
{
  //write your code here
  int t;
  cin >> t;
  
  while(t--)
  {
    string s;
    cin >> s;
    int len = s.length();
    findCapital(s, 0);
  }
  return 0;
}