#include <iostream>
// #define MOD 1000000007
using namespace std;
long long fast_power(long long base, long long power)
{
    long long result = 1;
    while (power > 0)
    {

        if (power % 2 == 1)
        { // Can also use (power & 1) to make code even faster
            result = (result * base);
        }
        base = (base * base);
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}

int main()
{
    // cout<<fast_power(1,-1)<<endl;
    // cout << fast_power(2, 1) << endl;   // Output: 2
    // cout << fast_power(2, 2) << endl;   // Output: 4
    // cout << fast_power(2, 4) << endl;   // Output: 16
    // cout << fast_power(3, 4) << endl;   // Output: 81
    cout << fast_power(2, 50) << endl; // Output: 976371285
    return 0;
}