#include<iostream>
using namespace std;

int main()
{
    int t, xa, xb, Xa, Xb, result;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> xa >> xb >> Xa >> Xb;
        result = (Xa / xa) + (Xb / xb);
        cout << result << endl;
    }
    return 0;
}