//////////////////////////////////////////////////////////////////////
//Christopher Gborgli: Parentheses : 673 : MrRobot4.0
//Data structure required : stack
//Tricks of the trade :
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <stack>
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//speeds up execution 
	int Cases;
	string Line;

	cin >> Cases; cin.ignore();
	while (Cases != 0)
	{
		getline(cin, Line);

		stack<char>Stack;
		for (int i = 0; i < Line.size(); i++)//looping through string of braces
		{
			if(Line[i]== '(' || Line[i] == '[')//push to stack if  open brace
				Stack.push(Line[i]);
			if (Line[i] == ')' || Line[i] == ']')//if brace in string is an closed one 
			{
				if(Stack.empty())//pused closed brace to stack if empy
					Stack.push(Line[i]);
				else if (Stack.top() == '(' && Line[i] == ')')
					Stack.pop();
				else if (Stack.top() == '[' && Line[i] == ']')
					Stack.pop();
			}	
		}
		if (Stack.empty())//everything match if stack is empty
			cout << "Yes";
		else
			cout << "No";//more than one char in stck unmatched

		cout << "\n";
		Cases--;
	}
	return 0;
}