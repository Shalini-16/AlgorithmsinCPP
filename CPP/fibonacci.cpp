#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==0||n==1)
    return n;
    else
    return fibo(n-2) + fibo(n - 1);
}
int main()
{
    int x;
    cin >> x;
    cout << fibo(x);

    return 0;
}