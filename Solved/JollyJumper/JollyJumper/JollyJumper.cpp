//////////////////////////////////////////////////////////////////////

//Christopher Gborgli : Jolly Jumpers: 10038 : MrRobot4.0

//Data structure required : Vectors

//Tricks of the trade:N/A

/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
	//Variable declaration n that holds the value being read
	int n;

	while (cin >> n)//till there is nothing to read
	{
		bool jolly = true;

		//Vectors are redeclared
		vector<int>Num(n);
		vector<int>Diff(n - 1);

		//inputs elements in Num array after the first number in sequence is read
		for (int x = 0; x < n; x++)
			cin >> Num[x];

		for (int x = 0; x < n - 1; x++)
			Diff[x] = abs(Num[x] - Num[x + 1]);

		//sorts the Array containing the difference between successive elements in Num array
		sort(Diff.begin(), Diff.end());

		//sets jolly to false when element in sorted Diff array is not equal to 
		for (int x = 1; x <= n - 1; x++)
		{
			if (Diff[x - 1] != x)
				jolly = false;
		}

		//checks if jolly is true or false
		if (jolly)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;

		//deletes everything in Arrays
		Num.clear();
		Diff.clear();
	}
	return 0;
}