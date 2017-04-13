//////////////////////////////////////////////////////////////////////

//Christopher Gborgli : Relational Operator : 11172 : MrRobot4.0

//Data structure required : N/A

//Tricks of the trade :N/A

/////////////////////////////////////////////////////////////////////


#include<iostream>

using namespace std;

int main()
{
	int x;
	long a, b;

	cin >> x;//read in setof inputs

	for (int i = 0; i < x; i++)//loop through number of cases
	{

		a = 0; 
		b = 0;  

		cin >> a >> b; //read both values 

		if (a<b)
			cout << "<" << endl;  
		else if (a>b)  
			cout << ">" << endl;  
		else
			cout << "=" << endl;

	}
	return 0;
}
