//////////////////////////////////////////////////////////////////////
//Christopher Gborgli : Big Mod  : 374: MrRobot4.0
//Data structure required : N/A
//Tricks of the trade :N/A
//
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<cmath>

using namespace std;
//This function  calculate the Modulo
int MOD(long B, long P, int M)
{
	long A;
	if (P == 0)//if exponent is 0 
		return 1;

	else if (P % 2 == 0)//if the exponential value is even
		return (MOD(B, P / 2, M) * MOD(B, P / 2, M)) % M;

	else//if the exponent is an odd number
	{
		A = MOD(B, P - 1, M);//calculates the modulo for even exponent
		return ((B % M)* A) % M; 
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	int M;
	long  B, P;

	while (cin >> B >> P >> M)
	{
		cout << MOD(B, P, M) << "\n";
		cin.ignore();
	}
	return 0;
}