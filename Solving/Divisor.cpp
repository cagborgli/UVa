//////////////////////////////////////////////////////////////////////
//Christopher Gborgli :Divisor :13131 :MrRobot4.0
//Data structure required:  Vectors, sets
//Tricks of the trade: used set to store unique divisors
/////////////////////////////////////////////////////////////////////
//WORKS FOR AVAILABLE INPUTS PUT GET WA ON UVA
#include<iostream>
#include<vector>
#include<set>
#include<math.h>

using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  long long N;
  long long i,j,k,n,sum,temp;
  set<int>::iterator it;//declaration of set iterator
  cin>>N;
  for(i=0;i<N;i++)
  {
    set<int>Set;//declaration of set
    cin>>n>>k;
    if(n==1 && k!=1)
      sum=1;
    else
      sum=0;
     long long square_root = (long long )sqrt(n) + 1;
      for (j = 1; j <= square_root; j++)
      { 
        if (n % j == 0/* && j*j!=n  */&& j%k != 0)
        { 
          Set.insert(j);
          temp= n/j;
          if(temp%k != 0 )Set.insert(temp);
        }
      }
    for (it =Set.begin(); it!=Set.end(); ++it)//set stores unique divisors to prevent duplicates
      sum += *it;
    cout<<sum<<"\n";
  }
}