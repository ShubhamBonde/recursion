#include <iostream>
using namespace std;
void pattern (int n, int num)
{
    if (n == num) return;
    printf("%2d", n);
    pattern(n+1, num);
    printf("%2d", n);
}
int main()
{
    pattern(1, 5);
}