#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
   vector<int>h(n);
   for(int i=0;i<n;i++){
    cin>>h[i];
 
   }
   int cnt=0;
   for(int i=0;i<h.size();i++){
    int left=i;
    while(left>0 && h[left-1]<=h[left])
    left--;
   
   int right=i;
   while(right<n-1 &&h[right+1]<=h[right])
   right++;
   cnt=max(cnt,right-left+1);
    }
  cout<<cnt<<endl;
    return 0;
}
 