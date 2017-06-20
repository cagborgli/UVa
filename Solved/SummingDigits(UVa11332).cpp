#include<iostream>

using namespace std;

int SUM(long long num)
{
  long long Ans=0;
  
  while(num >=10)
  {
      Ans += (num%10);
      num /=10;
  }
  Ans +=num;
  
  return Ans;
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  long long num1,ans,i;
  cin>>num1;
  while(num1 !=0)
  {
    ans=num1;
    while(ans>=10)
      ans =SUM(ans);
    cout<<ans<<"\n";
    
    cin>>num1;
  }
  
}