#include<iostream>
#include<vector>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0);
  int i,j,N,A,textLength;
  vector<vector<char>>Telephone(10);
  Telephone[0]={' '};
  Telephone[1]={'.',',','?','"'};
  Telephone[2]={'a','b','c'};
  Telephone[3]={'d','e','f'};
  Telephone[4]={'g','h','i'};
  Telephone[5]={'j','k','l'};
  Telephone[6]={'m','n','o'};
  Telephone[7]={'p','q','r','s'};
  Telephone[8]={'t','u','v'};
  Telephone[9]={'w','x','y','z'};
  
  cin>>N;
  for(i=0;i<N;i++)
  {
    cin>>textLength;
    vector<int>Number;
    vector<int>Text;
    
    for(j=0;j<textLength;j++)
    {
      cin>>A;
      Number.push_back(A);
    }
    for(j=0;j<textLength;j++)
    {
      cin>>A;
      Text.push_back(A);
    }
    for(int k=0;k<textLength;k++){
      cout<<Telephone[Number[k]][Text[k]-1];}
      
    cout<<"\n";
    
  }
}