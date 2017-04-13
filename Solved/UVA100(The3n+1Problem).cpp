#include<iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  int A,B,a,b,i,j,count,maximum;
  long temp;
  while(cin>>A>>B)
  {
    if(A>B)
      {a=B;b=A;}
    else
      {a=A;b=B;}
    
    maximum=0;
    for(i=a;i<=b;i++)
    {
      count=1;
      temp=i;
      while(temp !=1)
      {
        if(temp % 2 ==1)
        {temp=(3*temp)+1;count++;}
        else
        {temp=temp>>1;count++;}
      }
      if(maximum <count)
        maximum=count;
    }
    cout<<A<<" "<<B<<" "<<maximum<<"\n";
  }
}