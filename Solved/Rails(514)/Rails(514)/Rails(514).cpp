//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: Rails : 514 : MrRobot4.0
//Data structure required : Vectors & Stack
//Tricks of the trade :
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int Num;
	int index = 0;//index for coach permutation

	while (true)
	{
		cin >> Num;
		if (Num == 0)//if there are no coaches exit while loop
			break;

		vector<int>Coach_permutation(Num);//vector to store coach permutations
		while (true)
		{
			cin >> Coach_permutation[0];
			if (Coach_permutation[0] == 0)//if the first number read is 0 then end of case
			{cout << "\n";break;}

			for (int i = 1; i < Num; i++)//This loads up permutation coach 
				cin >> Coach_permutation[i];

			stack<int> DirectA_Coach;//stack to keep incomming coaches

			for (int Coach_Num = 1; Coach_Num <= Num; Coach_Num++)
			{
				DirectA_Coach.push(Coach_Num);

				while (!DirectA_Coach.empty() && Coach_permutation[index] == DirectA_Coach.top())
				{

					DirectA_Coach.pop();//pops top of stack if element matches 
					index++;
					if (index >= Num) break;//checks boundary for coach permutation vector
				}
			}
			index = 0;
			if (DirectA_Coach.empty()) cout << "Yes\n";//
			else  cout << "No\n";
		}
	}
	return 0;
}