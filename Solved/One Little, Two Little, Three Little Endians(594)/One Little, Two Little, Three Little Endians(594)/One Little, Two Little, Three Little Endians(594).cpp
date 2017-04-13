//////////////////////////////////////////////////////////////////////

//Christopher Gborgli : Problem name : 594: MrRobot4.0

//Data structure required : bitset

//Tricks of the trade :N/A

/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<bitset>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	int Num;//variable holds number to be manipulated
	int a, b, c;

	while (cin >> Num)
	{
		bitset<32>Num_binary(Num);
		int New_Num = 0;

		for (int i = 0; i<32; i++)
		{
			if (Num_binary[i])//while the bit is a 1
			{
				a = (i % 8);
				b = 8*(3 - i / 8);
				c = a + b;
				New_Num |= 1 << c;
			}
		}
		cout << Num << " converts to " << New_Num << "\n";
	}
	return 0;
}