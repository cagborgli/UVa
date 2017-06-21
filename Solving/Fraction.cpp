//Christopher GBorgli
//CMPS 1063
//TR 9:30- 10:50
//This program accepts the numerator and denomenator of two separate fractions 
//from the user and add,substract, multiply,divide or compare them(whether greater or equal)
//and the answers for the mathematicas operations are reduced to its lowest terms.

//liberaries used
#include<iostream>
#include<fstream>
#include<iomanip>
#include<math.h>

using namespace std;

void heading();

ofstream outfile;

class Fraction
{
	int num, denom;

public:
	Fraction()
	{num = 0; denom = 1;}

	Fraction(int x)
	{num = x;denom = 1;}

	Fraction(int x, int y)
	{num = x;denom = y;}
	
	/*Function: Equal
	Description:checks if one fraction is equal to another
	Input:Two fractions
	Output: returns True or false*/
	bool Equal(Fraction B)
	{
		bool Equal = false;
		if (num % B.num == 0 || B.num % num == 0)
			Equal = true;
		else
			Equal = false;

		if (denom % B.denom == 0 || B.denom % denom==0)
			Equal = true;
		else
			Equal = false;

		if (Equal == 1)
			outfile << " is True" << endl<<endl;
		else
			outfile << " is False" << endl<<endl;
		return 0;
	}
	/*Function: Greater
	Description:checks if one fraction is greater than the lther
	Input:Fractions
	Output: returns true or false */
	bool Greater(Fraction B)
	{
		bool Greater = false;
		if (num / denom > B.num / B.denom)
			Greater = true;
		if (Greater == 1)
			outfile << " is True" << endl<<endl;
		else
			outfile << " is False" << endl<<endl;
		return 0;
	}
	/*Function: Add
	Description:Adds two fractions
	Input:Fractions
	Output: Returns the additions of the fractions*/
	Fraction Add(Fraction B)
	{
		Fraction Answer;
		Answer.num = (num * B.denom) + (denom * B.num);
		Answer.denom = denom * B.denom;
		return Answer;
	}
	/*Function:Sub
	Description:Subtracts one fraction from another.
	Input:fractions
	Output: returns subtraction results*/
	Fraction Sub(Fraction B)
	{
		Fraction Answer;
		Answer.num = (num * B.denom) - (denom * B.num);
		Answer.denom = denom * B.denom;
		return Answer;
	}
	/*Function: Multi
	Description:Multiplies two fractions.
	Input:none
	Output: returns the product of the two fractions*/
	Fraction Mult(Fraction B)
	{
		Fraction Answer;
		Answer.num =num * B.num;
		Answer.denom =denom * B.denom;
		return Answer;
	}
	/*Function: Division
	Description:Divides one fraction by another fraction.
	Input:two fractions
	Output: returns the quotient of two fractions*/
	Fraction Division(Fraction B)
	{
		Fraction Answer;
		Answer.num =num * B.denom;
		Answer.denom =denom * B.num;
		return Answer;
	}
	/*Function: Lowestterm
	Description: reduces a positive fraction to kits lowest term.
	Input:fraction
	Output: none*/
	void Lowestterm()
	{
		if (num<denom)
		{
			for (int i = num; i > 1; i--)
			{
				if ((denom % i == 0) && (num % i == 0))
				{
					denom /= i;
					num /= i;
				}
			}
		}
		else
		{
			for (int i = denom ; i > 1; i--)
			{
				if ((denom % i == 0) && (num % i == 0))
				{
					denom /= i;
					num /= i;
				}
			}
		}
	}
	/*Function: Display
	Description:Displays the numerator and denomenator of a fraction.
	Input:Fraction
	Output: prints out the numerator and denomenator of a fraction*/
	void Display() 
	{
		if (denom == 1)
			outfile << " = " << num  << endl << endl;
		else
			outfile<<" = "<< num <<"/"<< denom << endl<<endl;
	}
};

int main()
{
	double a, b, c, d,x=1; 
	char op;

	outfile.open("fractionoutput.txt");

	heading();  // calls the heading function

	while (x > 0)
	{
		cout << "\n\nEnter the numerator of first fraction ";
		cin >> a;
		cout << "\nEnter denomenator of first fraction ";
		cin >> b;
		cout << "\nEnter operator '+' '-' '*' '/' or '=' ";
		cin >> op;
		if (op == '=')  //allows to accept "==" from user
			cin >> op;
		cout << "\nEnter the numerator of second fraction ";
		cin >> c;
		cout << "\nEnter denomenator of second fraction ";
		cin >> d;

		if (op == '=')
			outfile << a << "/" << b << " " << op<<op << " " << c << "/" << d;
		else
			outfile << a << "/" << b <<" "<<op<<" "<< c << "/" << d ;

		//Function calls
		Fraction First(a, b);
		Fraction Second(c, d);

		Fraction Ans;

		if (op == '=')
			First.Equal(Second);

		if (op == '>')
			First.Greater(Second);

		if (op == '+')
		{
			Ans = First.Add(Second);
			Ans.Lowestterm();
			Ans.Display();
		}
		if (op == '-')
		{
			Ans = First.Sub(Second);
			Ans.Lowestterm();
			Ans.Display();
		}
		if (op == '*')
		{
			Ans = First.Mult(Second);
			Ans.Lowestterm();
			Ans.Display();
		}
		if (op == '/')
		{
			Ans = First.Division(Second);
			Ans.Lowestterm();
			Ans.Display();
		}

		cout << "\n\nEnter 1 to do more calculations or comparisons and 0 to quit  ";
		cin >> x;
	}
	
	system("pause");
	return 0; 
}
/*Function: heading
Description:Creates the heading of the output file.
Input:none
Output: prints out the heading of program to output file*/
void heading()
{
	outfile << "Christopher GBorgli" << endl;
	outfile << "CMPS 1063" << endl;
	outfile << "TR 9:30- 10:50" << endl;
	outfile << "This program accepts the numerator and denomenator of two separate fractions" << endl;
	outfile << "from the user and add,substract, multiply,divide or compare them(whether greater or equal)" <<endl;
	outfile <<"and the answers for the mathematicas operations are reduced to its lowest terms."<< endl;
	outfile << "__________________________________________________________________________________________" <<"\n\n";
}