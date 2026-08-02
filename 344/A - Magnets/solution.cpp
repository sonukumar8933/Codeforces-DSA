#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   int cnt=0;
   vector<int>m(n);
   for(int i=0;i<n;i++){
    cin>>m[i];
   }
   for(int i=0;i<n;i++){
    if(m[i]!=m[i+1])cnt++;
   }
   cout<<cnt<<endl;
   
    return 0;
 
  
}
 