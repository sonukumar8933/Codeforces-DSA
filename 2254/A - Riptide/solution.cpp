#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  vector<int>a(3);
  while(t--){
  vector<int>a(3);
  cin>>a[0]>>a[1]>>a[2];
  int round=0;
  // if(a[0]==a[1]   || a[1]==a[2])break;
  sort(a.begin(),a.end());
  int sub1=a[1]-a[0];
  int sub2=a[2]-a[1];
  round=min(sub1,sub2);
  cout<<round<<endl;
 
 
    
 
 
  }
  
  return 0;
}