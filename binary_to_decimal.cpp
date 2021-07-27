class Solution
{
	public:
		int binary_to_decimal(string str)
		{
string  str;
    cin >> str;
    stringstream ss(str);
    int n = 0;
    ss >> n;

    int number = n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    int dec_number = 0;
    for (int i = 0; i < count; i++)
    {

        int x = number % 10;

        dec_number += (x * pow(2, i));
        //cout << dec_number << endl;
        number = number / 10;
    }

    cout << dec_number;
      	}
};
