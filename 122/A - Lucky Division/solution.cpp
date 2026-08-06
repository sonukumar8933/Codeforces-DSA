#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main()
{
  string n;
  cin >> n;
  int n1=stoi(n);
  vector<int> lucky1 = {
    4, 7, 44, 47, 74, 77,
    444, 447, 474, 477,
    744, 747, 774, 777
};
 
 
 
 
 for (int x : lucky1) {
    if (n1 % x == 0) {
        cout << "YES";
        return 0;
        
    }
   
    
    
}
cout<<"NO"<<endl;
 
 
 
 
  return 0;
  
  
}