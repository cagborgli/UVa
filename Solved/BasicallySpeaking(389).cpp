//////////////////////////////////////////////////////////////////////
//Christopher Gborgli :Basically Speaking : 389:MrRobot4.0
//Data structure required:  Vectors
//Tricks of the trade: Created an ASCII table to change input to decimal 
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include <vector>
#include <string>
#include<iomanip>

using namespace std;

int main()
{
  //ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
  string Num1,S_Num2; long Base1,Base2,i,R,Num2;
  vector<int>ASCII(128);
	
  string H ="0123456789ABCDEF";
  for (i= 0; i <H.size(); i++)
    ASCII[H[i]]=i;
  char Hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		
	while (cin>>Num1>>Base1>>Base2)
	{
		vector<long>Number;
		vector<long>D_Number;
		vector<char>Output;
		
		//Puts number to be converted into a vector
		for (i= 0; i <Num1.size(); i++)
			Number.push_back(ASCII[Num1[i]]);
    
		D_Number.push_back(Number[0]);//puts first number of  number to be converted 
    
        //calculating decimal value using horners rule
		for (i=0; i <Number.size()-1; i++)
			D_Number.push_back((D_Number[i]*Base1)+Number[i+1]);
			
		Num2 = D_Number[D_Number.size()-1];//final decimal number in 
		S_Num2= to_string(Num2);//convert int decimal value to a string 
  
    
        //if  final base is base 10
		if (Base2 == 10)
		  if(S_Num2.size()>7)
			cout<<setw(7)<<"ERROR"<<"\n";//can't fit on display 
		  else
			cout<<setw(7)<<Num2 <<"\n";
			  
		else if(S_Num2 =="0")//if decimal value is 0
		  cout<<setw(7)<<"0"<<"\n";
		  
		else//changing decimal number to appropriate result with given base
		{
		  while(Num2 !=0){
		    R=Num2 % Base2;
		    Output.push_back(Hex[R]);
		    Num2 /=Base2;
		}		
		S_Num2="";
		for (i=Output.size()-1;i>= 0; i--)
			S_Num2 += Output[i];
		    
		if(S_Num2.size()>7)
			cout<<setw(7)<<"ERROR"<<"\n";
		else
			cout<<setw(7)<<S_Num2<<"\n";
		}
	}
	return 0;
}