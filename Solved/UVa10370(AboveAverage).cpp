#include<iostream>
#include <vector>
#include<iomanip>

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(false); cin.tie(0);
	
	int i,j,C,N,num,Total,count;
	double Average,result;
  cin>>C;
	for(i=0;i<C;i++)
	{
	  cin>>N;
	  vector<int>Score;
	  Total=0;
	  count=0;
	  for(j=0; j<N;j++)
	  {
	    cin>>num;
	    Score.push_back(num);
	    Total +=num;
	  }
	  Average=Total/N;
	  for(j=0; j<N;j++)
	  {
	    if(Score[j]>Average)
	      count++;
	  }
    
    result=(double)count/N;
	  cout<<fixed<<setprecision(3)<<result*100<<"%\n";
	}
}