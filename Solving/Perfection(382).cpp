#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
  //ios_base::sync_with_stdio(false); cin.tie(0);
  long long i,j,n,sum;

 cin>>n;
 cout<<"PERFECTION OUTPUT"<<"\n";
  while(n !=0)
  {
     sum=0;
    for(j=1;j<n;j++)
    {
      if(n%j==0)
        sum +=j;
    }
    if(sum==n)
      cout<<setw(5)<<n<<"  PERFECT"<<"\n";
    else if(sum<n)
      cout<<setw(5)<<n<<"  DEFICIENT"<<"\n";
    else
      cout<<setw(5)<<n<<"  ABUNDANT"<<"\n";
      
    cin>>n;
  }
      
  cout<<"END OF OUTPUT"<<"\n";
}
.