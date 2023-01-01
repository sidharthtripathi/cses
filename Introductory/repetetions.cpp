#include <bits/stdc++.h>
using namespace std;
int rep(string &s){
    if(s.size() == 0)
        return 0;
    int count = 1;
    int maxi = 1;
    for(int i = 1; i<s.size() ; i++){
        if(s[i]==s[i-1])
            count++;
        else
            count = 1;
        if(count > maxi)
            maxi = count;
    }
    return maxi;
}
int main(){
string s;cin>>s;
cout<<rep(s);
}