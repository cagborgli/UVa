//////////////////////////////////////////////////////////////////////
//Christopher Gborgli : GCD LCM : 11388: MrRobot4.0
//Data structure required : N/A
//Tricks of the trade :N/A
/////////////////////////////////////////////////////////////////////
#include<iostream>

using namespace std;

int gcd(long a, long b) { return b == 0 ? a : gcd(b, a %b); }//Function that calculate gcd
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	int cases;
	long a, b, G, L;

	cin >> cases;//reads in number os cases
	while (cases--)
	{
		cin >> a >> b;
		//calls GCD function depending on which greater
		if (a>b)
			G = gcd(a, b);
		else
			G = gcd(b, a);
		L = (a*b) / G;//calculates the LCM

		if (G == a && L == b)
			cout << G << " " << L << "\n";
		else
			cout << "-1" << "\n";
	}

	return 0;
}