#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int x,y, a, b;
	int rem;
	int sum;

	cin >> x;

	vector<int>Num;

	for (int i = 1; i <= x; i++) 
	{
		rem = 0;
		cin >> y;
		
		for (int i = 0; i < y; i++) 
		{
			cin >> a;
			cin >> b;
			Num.push_back(a+b);
		}
		for (int i = y - 1; i > 0; i--) 
		{
			sum = rem + Num[i];
			Num[i]=sum % 10;
			rem = sum / 10;
		}

		Num[0] = rem + Num[0];


		for (int i =0;i<y; i++)
			cout << Num[i];

		if(i!=x)
			cout << "\n\n";

		Num.clear();
	}
	cout << "\n";
	return 0;
}
