#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;
 
int main() {
    int x;
    cin>>x;
    int cnt=0;
    for(int i=5;i>=1;i--){
        int n1=x/i;
        cnt=n1+cnt;
        x=x-(i*n1);
        
 
    }
    cout<<cnt<<endl;
    
  
 
 
    return 0;
}