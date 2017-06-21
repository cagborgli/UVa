//////////////////////////////////////////////////////////////////////
Christopher Gborgli :Ordering Task:10305:MrRobot4.0
Data structure required:  Vectors, stack 
Tricks of the trade: 
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include<stack>
#include <vector>

using namespace std;

typedef vector<int> V;
typedef vector<bool> B;

//Function to perform DFS on Graph
void DFS(vector<V> &Graph,B &checker,stack<int> &Stack,int t)
{
    checker[t] = true;
    for (int l = 0; l < Graph[t].size();l++)
    {
        int next = Graph[t][l];
        if (!checker[next])
            DFS(Graph,checker,Stack, next);
    }
    Stack.push(t);
}

int main()
{  
    int m, n,i,j;
    int k;
    cin >> n >> m;
    while (n != 0 && m != 0)
    {
        vector<V>Graph(n + 1);
        B checker(n + 1,false); // boolean for checking visited nodes
        stack<int>Stack;
        for (k = 0; k < m; k++)//creating graph
        {
            cin >>i>>j;
            Graph[i].push_back(j);
        }
        
        
        for (int k = 1; k <= n; k++)//topological sort
            if (!checker[k])
                DFS(Graph,checker,Stack, k);

        while (Stack.empty() == false)
       {
          cout << Stack.top() << " ";
          Stack.pop();
        }
        cout <<"\n"; 
        cin >> n >> m;
    }
    return 0;
}