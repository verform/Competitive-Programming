//Given non-zero two integers N and M. The problem is to find the number closest to N and divisible by M. If there are more than one such number, then output the one having maximum absolute value.

#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, M;
    cin >> n >> M;
    int N = abs(n);
    int m = abs(M);
    int x = m - (N % m);
    int quotient = (N / m);
    int divisible_number = quotient * m;
    int difference = N - divisible_number;


    if (n > 0)
    {
        if (x < difference)
        {   int res = n + x;
            cout << res;
        }

        else if (x > difference)
            cout << (n - difference);
        else
            cout << n + x;

    }
    else if (n < 0)
    {
        if (x < difference)
        {
            int max_number = (n - x);
            cout << max_number;

        }
        else if (x > difference)
        {
            int max = (n + difference);
            cout << max;
        }
        else
            cout << (n - x);
    }

}
