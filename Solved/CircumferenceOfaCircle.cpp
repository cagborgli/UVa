#include<iostream>
#include<iomanip>
#include<math.h>

#define PI 3.141592653589793

using namespace std;

int main(){
  
  double x1,y1,x2,y2,x3,y3;//coordinates of points a(x1,y1,), b(x2,y2), and c(x3,y3)
  double d1,d2,d3;
  double A,S,P,R;
  
  while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
  {
   d1=sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));//bc
   d2=sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));//ca
   d3=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));//ab
   
   P= d1+d2+d3;//calculating perimeter of triangle
   S= 0.5 * P; // calculating semi- perimeter
   A= sqrt(S*(S-d1)*(S-d2)*(S-d3)); //Heron's Formula
   R= d1*d2*d3/(4*A); //radius of circumscribed circle  
   cout<<fixed<<setprecision(2)<<2*PI*R<<"\n";
  }
}