#include <bits/stdc++.h>
using namespace std;

int main(){
int n; cin>>n;
vector <pair<int,int>> ques;
for(int i = 0 ; i<2*n ; i++){
    int temp;cin>>temp;
    if(i%2==0)
        ques.push_back({temp,1});
    else
        ques.push_back({temp,-1});
}
sort(ques.begin(),ques.end());
int maxi = 0,sum = 0;
for(auto &i : ques){
sum = sum + i.second;
if(sum>maxi)
maxi = sum;
}
cout<<maxi;

}