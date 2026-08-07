#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main()
{
  string n;
  cin >> n;
 vector<char>ans={
  'H','Q','9'
 };
 for(int i=0;i<n.size();i++){
  for(int j=0;j<ans.size();j++){
    if(n[i]==ans[j]){
      cout<<"YES"<<endl;
      return 0;
    }
  }
 }
 cout<<"NO"<<endl;
 
 
 
 
  return 0;
  
  
}