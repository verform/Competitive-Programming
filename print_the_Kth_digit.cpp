#include<bits/stdc++.h>

using namespace std;
//function to calculate power
int power(int base, int exponent)
{
    int result = 1;
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    return result;
}
int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int number = power(a, b);
    cout << number << endl;
    int digit = 0;
    while (k--)
    {

        digit = number % 10;

        //cout << digit << endl;
        number /= 10;

    }
    cout << digit;



}
