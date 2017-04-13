//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: The Decoder: 458 : MrRobot4.0
//Data structure required : N/A
//Tricks of the trade :N/A
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string input;
	char in;
	while(getline (cin,input)){//while there is still a string to read
		for (int i = 0; i < input.size(); i++) {
			in = input[i] - 7;//7 subtracted from ASCII value and stored in char variable
			cout << in;
		}
		cout<< "\n";
	}
    return 0;
}

