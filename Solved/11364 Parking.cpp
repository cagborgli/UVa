#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
	int cases;
	cin >> cases;

	while (cases != 0)
	{
		int Answer = 0;
		int Position = 0;

		cin >> Position;
		vector<int>Store(Position);

		for (int i = 0; i < Position; i++)
			cin >> Store[i];

		int Maxi = Store[0],Mini = Store[0];

		for (int i = 0; i < Position; i++)
		{
			if (Store[i] > Maxi)
				Maxi = Store[i];
			if (Store[i] < Mini)
				Mini = Store[i];
		}
		Answer = 2 * (Maxi - Mini);
		cout << Answer << endl;

		cases--;
	}
	
	return 0;
}
