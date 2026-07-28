#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int x=0;
   string s;
   while(n--){
    cin>>s;
    if(s[1]=='+') // here we start from index 1 as at these index in all formate the sing of operation will be there
    x++;
    else{
        x--;
    }
   }
   cout<<x<<endl;
 
    return 0;
}