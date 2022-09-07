// Recursive program to print the subsequences of an array
#include<bits/stdc++.h>
using namespace std;


void combination(int *, string, int, int, int);
int main()
{
    int n, k;
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;

    combination(arr, "", 0, n, k);

}
void combination(int *arr, string s, int i, int n, int k)
{
    if (k == 0) cout << s << endl;

    for (int j = i; j < n; j++)
    {
        combination(arr, s+to_string(arr[j])+" ", j+1, n, k-1);
    }
}