#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main()
{
 
  string String;
  int i;
  
  while(getline(cin,String))
  {
     vector<char>Occupation(String.size());
     
     for(i=0;i<String.size();i++)
        Occupation.push_back(String[i]);
     for(i=0;i<Occupation.size();i++)
        cout<<Occupation[i];
     cout<<"\n";   
  }
}