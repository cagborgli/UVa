

#include<iostream>

using namespace std;


int main()
{
	int Case,L,B,H;

	cin >> Case;

	for (int i = 1; i <= Case; i++)
	{
		cout << "Case " << i <<": ";

		cin >> L;
		cin >> B;
		cin >> H;

		if (L <= 20 && B <= 20 && H <= 20)
			cout << "good" << endl;
		else
			cout << "bad" << endl;




	}
    return 0;
}

