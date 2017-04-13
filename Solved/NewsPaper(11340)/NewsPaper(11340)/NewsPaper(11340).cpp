//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: Newspaper : 11340 : MrRobot4.0
//Data structure required : Vectors
//Tricks of the trade :
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//speeds up execution

	int Cases,NumLines,NumChar;
	unsigned char PaidChar;
	double Total=0;
	int i= 0;
	double value;
	string paragraph;

	cin >> Cases;//reads in number of cases
	while (i < Cases)
	{
		vector<double>CharCost(128, 0);//intializes vector of 128 size to )'s

		cin >> NumLines;//Reads in string and loop through it to to insert char cost in vector
		for (int j = 0; j < NumLines; j++)
		{
			cin >> PaidChar >> value;
			CharCost[PaidChar] = value;//stores char cost
		}

		cin >> NumChar;
		for (int l = 0; l <= NumChar; l++)
		{
			getline(cin, paragraph);

			for (int k = 0; k < paragraph.size(); k++)
				Total += CharCost[paragraph[k]];//checks char value and add to total
		}

		cout <<fixed<<setprecision(2)<<Total / 100 << "$\n";
		Total= 0;
		CharCost.clear();
		i++;
	}
	return 0;
}