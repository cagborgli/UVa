#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
  long long  i,n,k;
  
  cin>>n;
  for(i=0;i<n;i++)
  {
    cin>>k;
    cout<<k*(k+2)<<"\n";
  }
}