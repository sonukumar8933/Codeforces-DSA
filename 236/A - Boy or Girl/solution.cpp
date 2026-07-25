#include <iostream>
#include <algorithm>
#include<vector>
//#include <cctype>
#include<unordered_set>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    unordered_set<char>st;
    string ans="";
 
    for(char ch :s){
        if(st.find(ch)==st.end()){
            ans +=ch;
            st.insert(ch);
        }
        
    }
    int n=st.size();
    if(n%2==0)cout<<"CHAT WITH HER!";
    else{
        cout<<"IGNORE HIM!";
    }
 
 
    
    return 0;
}