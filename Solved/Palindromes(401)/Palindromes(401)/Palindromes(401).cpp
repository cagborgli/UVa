//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: Palindromes: 401 : MrRobot4.0
//Data structure required : Vectors
//Tricks of the trade :N/A
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>


using namespace std;
int main()
{
	string input;
	int halfway,Input_size;
	bool P_flag  =true;//flag to determine palindrome
	bool M_flag = true;//flag to determine mirrored string 
	vector<char>Reverse(127, 0);
	
	//Table the holds the reverse of a character
	Reverse['A'] = 'A'; Reverse['E'] = '3'; Reverse['H'] = 'H'; Reverse['I'] = 'I'; Reverse['J'] = 'L';
	Reverse['L'] = 'J'; Reverse['M'] = 'M'; Reverse['O'] = 'O'; Reverse['S'] = '2'; Reverse['T'] = 'T';
	Reverse['U'] = 'U'; Reverse['V'] = 'V'; Reverse['W'] = 'W'; Reverse['Y'] = 'Y'; Reverse['Z'] = '5';
	Reverse['1'] = '1'; Reverse['2'] = 'S'; Reverse['3'] = 'E'; Reverse['5'] = 'Z'; Reverse['8'] = '8';
	Reverse['X'] = 'X';

	while (getline(cin,input))//while there is still something to read
	{
		Input_size = input.size();
		halfway = (Input_size - Input_size / 2);
		for (int i = 0; i<halfway; i++)
		{
			//compares char from botth sides of vector and checks for mirrored string
			//ans palindrome property of string 
			if (Reverse[input[i]] != input[Input_size - 1 - i])
				M_flag =false;
			if (input[i] != input[Input_size - 1 - i])
				P_flag = false;
		}

		if (M_flag && P_flag)
			cout << input << " -- is a mirrored palindrome.\n\n";
		else if (M_flag)
			cout <<input<< " -- is a mirrored string.\n\n";
		else if(P_flag)
			cout << input << " -- is a regular palindrome.\n\n";
		else
			cout << input << " -- is not a palindrome.\n\n";
		M_flag = P_flag = true;
	}
    return 0;
}

