//////////////////////////////////////////////////////////////////////
//Christopher Gborgli :Area:10589 : MrRobot4.0
//Data structure required:  N/A
//Tricks of the trade: N/A
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
 //ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	double i,N,a,A,Num_Inshaded,X,Y,X_a,Y_a;
  long double Point_x,Point_y;
//Area of the square
	
	cin>>N>>a;
	while(N !=0 && a!=0)
	{
	  A= a*a;
	  Num_Inshaded=0;
		for(i=0;i<N;i++)
		{
		  cin>>Point_x>>Point_y;
		  X=Point_x * Point_x;
		  Y=Point_y * Point_y;
		  X_a=(Point_x - a)*(Point_x - a);
		  Y_a=(Point_y - a)*(Point_y - a);
		  
		  if ((X+Y<=A)&&(X_a+Y_a<=A)&&(X+Y_a<=A)&&(X_a+Y<=A))
		    Num_Inshaded++;
		}
		
		cout<<fixed<<setprecision(5);
		cout<<A*Num_Inshaded/N<<"\n";
		cin>>N>>a;
	}
 
	return 0;
}