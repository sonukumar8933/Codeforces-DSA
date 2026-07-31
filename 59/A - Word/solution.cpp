#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int n1=0;
    int n2=0;
    for(char ch :s){
        if(isupper(ch))n1++;
        else{
            n2++;
        }
 
 
    }
    if(n1>n2){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
        
    }
 
   
   
 
   return 0;
}