#include<iostream>

using namespace std;

int F91( int x){
  
  if(x>=101)
    return x-10;
  else if (x <= 100)
    return F91( F91(x+11));
}
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  int N;
  cin>>N;
  while(N != 0)
  {
    cout<<"f91("<<N<<") = "<<F91(N)<<"\n";
    cin>>N;
  }
}