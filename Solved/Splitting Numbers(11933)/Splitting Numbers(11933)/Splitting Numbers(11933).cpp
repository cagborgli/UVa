//////////////////////////////////////////////////////////////////////

//Christopher Gborgli : Problem name : 11933 : MrRobot4.0

//Data structure required : 

//Tricks of the trade :N/A

/////////////////////////////////////////////////////////////////////
#include<iostream>
#include <bitset>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int Num,Split_a, Split_b;
	int i = 0;
	int count= 0;//stores the number of 1's already accessed
	cin >> Num;
	while (Num != 0)
	{
		Split_a = Split_b = 0;
		while (Num > 0)
		{
			if (1 & Num)
			{
				if (count % 2)//odd nujmber of 1's seen 
					Split_b |= 1 << i;
				else
					Split_a |= 1 << i;
				count++;
			}
			i++;
			Num = Num >> 1;
		}
		cout << Split_a << " " << Split_b << "\n";
		cin >> Num;
		i = count = 0;
	}
	return 0;
}