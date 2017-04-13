//////////////////////////////////////////////////////////////////////

//Christopher Gborgli: Google is feeling Lucky : 12015 : MrRobot4.0

//Data structure required : Vectors

//Tricks of the trade :

/////////////////////////////////////////////////////////////////////
#include <iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
	int Case, relevance,HR;
	string url;

	vector<string>URL;//vector to hold urls
	vector<int>Relevance;//vector to hold relevance of url

	cin >> Case;//read in number los cases

	for (int i = 1; i <= Case; i++)//loop for number of cases
	{
		HR = 0;//stores the highest relevance


		for (int j = 0; j < 10; j++)
		{
			cin >> url;
			URL.push_back(url);
			cin >> relevance;
			Relevance.push_back(relevance);

			if (relevance > HR)
				HR = relevance;
		}

		cout << "Case #" << i << ":" << endl;

		for (int j = 0; j < 10; j++)
		{
			if (Relevance[j] >= HR)
				cout << URL[j]<< endl;
		}

		//zero out vectors for next case
		URL.clear();
		Relevance.clear();

	}

    return 0;
}

