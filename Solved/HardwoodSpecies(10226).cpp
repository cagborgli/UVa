//////////////////////////////////////////////////////////////////////
//Christopher Gborgli : Hardwood Species : 10226: MrRobot4.0
//Data structure required : map
//Tricks of the trade :N/A
//
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<map>
#include<string>
#include<iomanip>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	
	int Num_cases,Total;
	double Population;//helps calculate the percentage of species read
	string Species;//stores name of Tree species

	cin >> Num_cases; cin.ignore(); cin.ignore();//reads in number of cases and ignores blank line after
	
	while (Num_cases--)//Number of cases greater than 0
	{
		
		map<string, int>Tree;//Declares a map called Tree
		map<string, int>::iterator it;//initializes iterator that goes through Tree

		Total = Population = 0;//reset variables after each case;
	
		while (getline(cin, Species))
		{
			if (Species.empty())
				break;//if a blank line is read exit while loop 
			Total++;
			Tree[Species]++;
		}

		//Go through map
		for (it = Tree.begin(); it != Tree.end(); ++it)
		{
			Population = it->second *  100 ;
			cout << it->first << " " << fixed << setprecision(4) << Population / Total<< "\n";
		}
		
		Tree.clear();//empty map
		if(Num_cases != 0)//print a blank line if number of cases is not zero
			cout << endl;
	}

	return 0;
}