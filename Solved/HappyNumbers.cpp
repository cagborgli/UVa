#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;

long long Compute(long long n)
{
  long long sum=0;
  while(n >=10)
  {
   sum += pow((n %10),2);
    n=n/10;
  }
  sum += pow((n %10),2);
  return sum;
}

int main()
{
  long long i,Case,num1,num2;
  
  cin>>Case;
  for(i=1;i<=Case;i++)
  {
    cin>>num1;
    num2=num1;
  
    if(num1==2||num1==3)
      cout<<"Case #"<<i<<": "<<num2<<" is an Unhappy number."<<"\n";
    else 
    {
      if(num1<10)
        num1=pow(num1,2);
      while(num1>9)
        num1=Compute(num1);
      if(num1==1)
        cout<<"Case #"<<i<<": "<<num2<<" is a Happy number."<<"\n";
      else
        cout<<"Case #"<<i<<": "<<num2<<" is an Unhappy number."<<"\n";
      
    }
    
  }
}