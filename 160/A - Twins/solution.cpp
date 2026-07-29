#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int>coin(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>coin[i];
        total=total+coin[i];
    }
    sort(coin.begin(),coin.end(),greater<int>());
    int mysum=0;
    int count=0;
    for(int i=0;i<n;i++){
        mysum=mysum+coin[i];
        count++;
        if(mysum>total-mysum){
            break;
        }
    }
    cout<<count;
  
 
 
    return 0;
}