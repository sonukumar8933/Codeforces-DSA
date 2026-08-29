#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>task(m);
  for(int i=0;i<m;i++){
    cin>>task[i];
  }
 long long time=0;
  int curr=1;
 
  for(int i=0;i<m;i++){
    int dest=task[i];
    if(dest>=curr){
      time=(dest-curr)+time;
    }
    else{
      time=(n-curr)+(dest)+time;
    }
    curr=dest;
    
  
    }
    cout<<time;
    return 0;
  }
 