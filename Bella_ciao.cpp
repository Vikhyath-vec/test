#include<iostream>
using namespace std;

int main()
{
    long long t, d, D, p ,q, temp, result;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> D >> d >> p >> q;
        temp = (D/d) - 1;
        // cout << temp << endl;
        result = (p * D) + (q * d * temp * (temp + 1)) / 2 + (q * (D/d) * (D%d));
        cout << result << endl;

    }
    return 0;
}