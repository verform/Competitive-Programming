// Given a number N.Find if the digit sum(or sum of digits) of N is a Palindrome number or not.
// Note:A Palindrome number is a number which stays the same when reversed.Example- 121,131,7 etc.

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int count_digit = 0;
    //calculating sum of digits of n
    while (n > 0)
    {
        //last digit of n
        int ldigit = n % 10;

        //sum of digits
        sum = sum + ldigit;
        //reducing the digits of number n by 1
        n = n / 10;
    }
    int sum_digit = sum;
    int check_sum = sum;

    //counting the digits of sum
    while (sum_digit > 0)
    {
        count_digit++;
        //reducing the digit of sum by 1
        sum_digit = sum_digit / 10;
    }



    //reverse the digits of sum to check for palindrome number
    //to store the reverse number
    int rev_number = 0;
    while (count_digit--)
    {
        // to reverse a number
        //if number is of 2 digit for example 15
        // then 5*10+1=51 that is reverse of 15
        // using this analogy
        int lrdigit = sum % 10; // last digit of sum

        rev_number = rev_number + (lrdigit * pow(10, count_digit ));

        sum = sum / 10;


    }
    if (check_sum == rev_number)
        cout << "Yes";
    else
        cout << "No";

}
