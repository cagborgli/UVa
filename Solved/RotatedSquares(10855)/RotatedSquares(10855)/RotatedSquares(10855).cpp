//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: Rotated Squares : 10855 : MrRobot4.0
//Data structure required : Vectors
//Tricks of the trade :
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<vector>
#include<string>

using namespace std;

//this function rotates square 90 degrees clockwise
void Rotate_Vec(vector< vector<char> > &matrix,int S,int T,int E) {
	while (S < T) {
		for (int i = S; i < E; i++){
			swap(matrix[S][i], matrix[i][E]);
			swap(matrix[S][i], matrix[E][E - i + S]);
			swap(matrix[S][i], matrix[E - i + S][S]);
		}
		S++; E--;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//speeds up execujtion time 

	int M, N, End, Limit, Total_Stages;
	int Stages = 0;
	int count = 0;
	bool flag =true;
	string Line;

	cin >> M >> N; cin.ignore();
	while ((M*N)!=0)//when both M and N are 0's
	{
		vector<vector<char>>Big(M, vector<char>(M));
		vector<vector<char>>Small(N, vector<char>(N));
		End = N - 1;
		Total_Stages = N / 2;

		//Big Matrix Insertion 
		for (int i = 0; i < M; i++)
		{
			getline(cin, Line);
			for (int j = 0; j < M; j++)
				Big[i][j] = Line[j];
		}
		//Small Matrix insertion
		for (int i = 0; i < N; i++)
		{
			getline(cin, Line);
			for (int j = 0; j < N; j++)
				Small[i][j] = Line[j];
		}

		Limit = (M - N) + 1;

		for (int Numchecks = 1; Numchecks <= 4; Numchecks++)
		{
			for (int i = 0; i < Limit; i++)
			{
				for (int j = 0; j < Limit; j++)
				{
					for (int k = 0; k < N; k++)
					{
						for (int l = 0; l < N; l++)
						{
							if (Small[k][l] != Big[k + i][l + j])
								flag = false;
						}
					}
					if (flag == true)//if flag stays true,then we have a match .
						count++;
					flag = true;
				}
			}
			cout << count;
			if (Numchecks < 4)
				cout << " ";
			count = 0;
			Rotate_Vec(Small, Stages, Total_Stages, End);//calls function to rotate current square
		}
		cout << "\n";
		cin >> M >> N; cin.ignore();
	}
		return 0;
}
