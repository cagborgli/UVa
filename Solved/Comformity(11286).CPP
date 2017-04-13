//////////////////////////////////////////////////////////////////////
//Christopher Gborgli : Ferry Loading III : 10901: MrRobot4.0
//Data structure required : Queues
//Tricks of the trade :N/A
//
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	long Num;
	int num, count;

	cin >> Num;
	while (Num != 0)
	{
		map<string, int>Combination;
		map<string, int>::iterator it;
		int Largest = 0;

		for (int i = 0; i < Num; i++)
		{
			vector<long>Combination1(5);
			for (int j = 0; j < 5; j++) //reads in corses into vector
			{
				cin >> num;
				Combination1[j] = num;
			}

			sort(Combination1.begin(), Combination1.end());//sorts courses

			string Courses = "";
			for (int j = 0; j < 5; j++)//concartenate courses into a string
				Courses += Combination1[j];

			Combination[Courses]++;//insert course combination into map

			Combination1.clear();//clear vector
		}
		count = 0;//used to check if popurarity of combination is uniques
		
		//checks for the highest popularity
		for (it = Combination.begin(); it != Combination.end(); ++it)
		{
			if (it->second > Largest)
				Largest = it->second;
		}

		//checks if popularity is uniue
		for (it = Combination.begin(); it != Combination.end(); ++it) 
		{
			if (it->second == Largest)
				count++;
		}


		if (Largest == 1 || count > 1)//all combinations are different or popularity is not unique 
			cout << Num << "\n";
		else
			cout << Largest << "\n";

		cin >> Num;
	}
	return 0;
}