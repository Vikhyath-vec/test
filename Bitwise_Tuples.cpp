#include<iostream>
#include<math.h>
using namespace std;

long long modpow(long long n, long long pow, long long mod)
{
    if(pow ==0)
        return 1;
    
    long long int ans = 1;
    while(pow)
    {
        if(pow % 2)
        {
            ans = (ans * n) % mod;
        }
        n = (n*n) % mod;
        pow /= 2;

    }

    return ans;
}
int main()
{
    long long m, n, t, result, temp;
    long long mod = 1000000007;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n >> m;
        temp = modpow(2, n, mod) - 1;
        result = modpow(temp, m, mod);
        cout << result << endl;
    }
    return 0;
}