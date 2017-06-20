#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;

vector<int>Letters(298,0);

int loveCalculator(string n)
{
  int sum=0;
  for(int i=0;i<n.size();i++)
  {
    sum +=Letters[n[i]];
  }
  return sum;
}
int sum(int n)
{
  int sum=0;
  while(n >=10)
  {
   sum += n %10;
   n=n/10;
  }
  sum +=n %10;
  return sum;
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  string name1,name2;
  int i,K,nameValue1,nameValue2,Min,Max;
  float percentage;
  K=0;
  for(i='a';i<123;i++){K=K+1;Letters[i]=K;}
  K=0;
  for(i='A';i<91;i++){K=K+1;Letters[i]=K;}
  
  while(getline(cin,name1))
  {
    getline(cin,name2);
    nameValue1=loveCalculator(name1);
    while(nameValue1 >9)
      nameValue1= sum(nameValue1);
      
    nameValue2=loveCalculator(name2);
    while(nameValue2 >9)
      nameValue2= sum(nameValue2);
      
    if(nameValue1==0 && nameValue2==0)
      cout<<"\n";
    else
    {
      Max=max(nameValue1,nameValue2);
      Min=min(nameValue1,nameValue2);
      percentage = double(Min*100)/Max;
      cout<<fixed<<setprecision(2)<<percentage<<" %\n";
    }
  

  }
}