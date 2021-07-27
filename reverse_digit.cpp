
//Given N,  reverse the digits of N.
  class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		     long long int number=n;
		     long long int count=0;//count the number of digit
		     while(n>0)
		     {
		         count++;
		         n=n/10;
		     }
		     //reverse the number it will automatically reverse the digit
		     long long int rev_number=0;
		     while(count--)
		     {
		         int ldigit=number%10;
		         rev_number +=ldigit*pow(10,count);
		         number=number/10;
		     }
		     return rev_number;
		}
};
