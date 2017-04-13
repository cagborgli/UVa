//////////////////////////////////////////////////////////////////////
//Christopher Gborgli : CD : 11849: MrRobot4.0
//Data structure required : Set
//Tricks of the trade :N/A
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization

	set<int>::iterator it;//pointer declaration for set
	int Num_Jack, Num_Jill;//variables to hold number of Catalogs for Jack and Jill
	int Num;//variable to read catalog numbers to set

	cin >> Num_Jack >> Num_Jill;
	while ((Num_Jack != 0) && (Num_Jill != 0))
	{
		set<int> Jack_Catalog, Jill_Catalog;//Jack & Jill set declaration
		int count = 0;

		//inserting all Jack's catalog numbers  into set
		for (int i = 0; i<Num_Jack; i++) {
			cin >> Num;
			Jack_Catalog.insert(Num);
		}

		//inserting all Jill's catalog numbers into set
		for (int i = 0; i<Num_Jill; i++) {
			cin >> Num;
			Jill_Catalog.insert(Num);
		}

		if (Jack_Catalog.size() >= Jill_Catalog.size()) {
			for (it = Jill_Catalog.begin(); it != Jill_Catalog.end(); it++)//go through Jills' Catalog
			{
				if (Jack_Catalog.find(*it) != Jack_Catalog.end())//if the catalog number is found in Jacks' set
					count++;
			}
		}
		else {
			for (it = Jack_Catalog.begin(); it != Jack_Catalog.end(); it++)//go through Jacks' Catalog
			{
				if (Jill_Catalog.find(*it) != Jill_Catalog.end())//if the catalog number is found in Jills' set
					count++;
			}
		}

		cin >> Num_Jack >> Num_Jill;
		cout << count << "\n";
	}

	return 0;
}