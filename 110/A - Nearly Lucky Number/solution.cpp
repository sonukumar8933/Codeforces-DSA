#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long  n;
    cin>>n;
    string s=to_string(n);
    // int n1 = s.length();
    // vector<string> ch(n1);
    // for(int i=0;i<n1;i++){
    //   cin>>ch[i];
    // }
    int cnt=0;
   for(char ch=0;ch<s.size();ch++){
    if(s[ch]=='4' || s[ch]=='7'){
      cnt++;
    }
    
  }
  if(cnt==4 || cnt==7){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
   
    return 0;
 
  
}
 