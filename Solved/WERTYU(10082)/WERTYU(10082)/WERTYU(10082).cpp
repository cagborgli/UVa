//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: WERTYU: 10082 : MrRobot4.0
//Data structure required : Vectors
//Tricks of the trade :N/A
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string in;
	string input = " WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./1234567890-=";
	string output = " QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.`1234567890-";
	vector<char>ASCIITable(128);//vector created will 128 locations 

	for (int i = 0; i < input.size(); i++)
		ASCIITable[input[i]] = output[i];//puts output char into input ASCII value location  

	while (getline(cin, in)){
		for (int i = 0; i < in.size(); i++)
			cout << ASCIITable[in[i]];//displays the Char in ASCII Table for in
		cout << "\n";
	}
    return 0;
}

