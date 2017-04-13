#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
  long i,x,Num;
  cin>>x;
  
  while(x !=0)
  {
    vector<long>Ages;
  	for ( i = 0; i <x; i++) 
  	{
  		cin>>Num;
  		Ages.push_back(Num);
  	}
  	sort (Ages.begin(), Ages.end());
  	for ( i = 0; i <x; i++)
  	{ if(i != x-1)
  	    cout<<Ages[i]<<" ";
  	   else 
  	    cout<<Ages[i];
  	}
  	 
  	cout<<"\n";
  	cin>>x;
  }
}