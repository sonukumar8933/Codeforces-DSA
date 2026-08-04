#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
 
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
 
    // a.erase(unique(a.begin(), a.end()), a.end());
    int distinct=unique(a.begin(),a.end())-a.begin();
    // int distinct=a.size();
    int duplicate=n-distinct;
    if(duplicate%2==0){
      cout<<distinct<<endl;
    }
    else{
      cout<<distinct-1<<endl;
    }
    
  }
  return 0;
}