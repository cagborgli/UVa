//////////////////////////////////////////////////////////////////////
Christopher Gborgli :Sin Cos Problem:12575 : MrRobot4.0
Data structure required:  N/A
Tricks of the trade: N/A
/////////////////////////////////////////////////////////////////////
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
const double pi = acos(-1); 

int main()
{
 ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
 int Case,i;
 double A,B,T,Answer;
 
 cin>>Case;
 for(i=0;i<Case;i++)
 {
   cin>>A>>B;
   T= atan2(A,B);//calcultes the value of  arc tangent of A and B(Theta)
   if(T<0)//if Theta is a negative integer
     T = 2*pi+T;
  Answer= A*sin(T)+B*cos(T);
  cout<<fixed<<setprecision(2)<<T<<" "<<Answer<<"\n";
 }
	return 0;
}