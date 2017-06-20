#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int GCD(long a, long b) { return b == 0 ? a : GCD(b, a %b); }//Function that calculate gcd
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);//for code optimization
	int i,j,k,N,M,Max,G,num;
	string String;
	
	cin >>N;cin.ignore();
	for(k=0;k<N;k++)
	{
	  vector<int>Numbers;
	  getline(cin,String);
	  stringstream ss(String);
	  while (ss >> num)
	    Numbers.push_back(num);
	    
		Max=0;
		M=Numbers.size();
    for(i=0;i<M-1;i++)
    {
      for(j=i+1;j<M;j++)
      {
        G=GCD(Numbers[i],Numbers[j]);
        if(G>Max)
          Max=G;
      }
    }
    cout<<Max<<"\n";
	}
}