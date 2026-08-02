#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    // if(a==b)cout<<'1';
    int cnt=0;
    while(a<=b){
      a=a*3;
      b=b*2;
      cnt++;
    }
    cout<<cnt<<endl;
   
    return 0;
 
  
}
 