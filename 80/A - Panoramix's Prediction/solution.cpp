#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool isprime(int n){
  if(n<2)return false;
  for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
  }
  return true;
}
 
int main()
{
  int n,m;
  cin >> n>>m;
  n++;
  while(!isprime(n)){
    n++;
  }
  if(n==m){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
   
  
  
  return 0;
}