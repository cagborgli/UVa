//////////////////////////////////////////////////////////////////////
//Christopher Gborgli : Ferry Loading III : 10901: MrRobot4.0
//Data structure required : Queues
//Tricks of the trade :N/A
//
/////////////////////////////////////////////////////////////////////

//This program reads in all input correctly  and ouputs in the rijght format
//as required but output is wrong and i was unable to figure out where the problem
//lied.
#include <iostream>
#include <string>
#include <queue>
#include <map>
#include<vector>

using namespace std;



int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	int Test_Cases, N, T, M, Arrival_Time, Real_Time, Time, count_0, Cross_Over;
	string Bank;
	queue<int> Left, Right;

	cin >> Test_Cases;
	for (int i = 0; i<Test_Cases; i++)
	{
		cin >> N >> T >> M;
		vector<int>Start_Time(M);
		for (int i = 0; i< M; i++)
		{
			cin >> Arrival_Time >> Bank;
			if (Bank == "Right")
				Right.push(i);
			else
				Left.push(i);
			Start_Time.push_back(Arrival_Time);//keeps all Arrival time in order it was read to asist in output
		}

		Real_Time = 0;

		while (!Left.empty() || !Right.empty())
		{
			count_0 = 0;//to make sure up to N number of car is carried on Ferry at a time 

			if (Right.empty())
				Time = Left.front();
			else if (Left.empty())
				Time = Right.front();
			else
			{
				if (Left.front() < Right.front())
					Time = Start_Time[Left.front()];
				else
					Time = Start_Time[Right.front()];
			}

			//Keeps the maximum time elapsed in Real_Time 
			if (Real_Time > Time)
				Real_Time = Real_Time;
			else
				Real_Time = Time;

			Cross_Over = 0;

			if(Cross_Over == 0)
			{
				while (count_0 < N && !Left.empty() && Start_Time[Left.front()] <= Real_Time)
				{
					Left.pop();
					cout << Real_Time + T << "\n";
					count_0++;
				}
				Cross_Over = 1;
				Real_Time += T;
			}
			else
			{
				while (count_0 < N && !Right.empty() && Start_Time[Right.front()] <= Real_Time)
				{
					Right.pop();
					cout << Real_Time + T << "\n";
					count_0++;
				}
				Cross_Over = 0;
				Real_Time +=T;
			}

		}
		cout << "\n";
	}
	
	return 0;
}