#include<iostream>

using namespace std;

int main()
{
  int Case, a,b,i,j,Sum;
  Sum =0;
  cin>>Case;
  for(j=1;j<=Case;j++)
  {
    cin>>a>>b;
    Sum=0;
    for(i=a;i<=b;i++)
    {
     if(i%2==1)
      Sum +=i;
    }
    cout<<"Case "<<j<<": "<<Sum<<"\n";
  }
}