//For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
//NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    //enter a 3 digit number
    cin >> n;
    // store the original number
    int number = n;

    int sum = 0;
    // run for loop for 3 times because it is 3 digit number
    for (int i = 0; i < 3; i++)
    {   // to find the last digit
        int ldigit = n % 10;
        //store sum of cubes of last digit
        sum = sum + (ldigit * ldigit * ldigit);
        //change the number to N-1 digit that is 1 less than original digit
        n = n / 10;


    }

// check condition for armstrong number
    if (number == sum)
        cout << "Yes";
    else
        cout << "No";
}
