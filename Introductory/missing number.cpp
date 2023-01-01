#include <bits/stdc++.h>
using namespace std;
unsigned long long missing(vector <unsigned long long> a , unsigned long long n){
    // size of array is n-1;
    unsigned long long X = (n*(n+1))/2;
    unsigned long long Y = 0;
    for(unsigned long long i = 0 ; i<n-1; i++)
        Y = Y + a[i];
    return X-Y;
}
int main(){
unsigned long long n;cin>>n;
vector <unsigned long long> a;
for(unsigned long long i = 0 ; i<n-1 ; i++){
    unsigned long long temp; cin>>temp;
    a.push_back(temp);
}
//test value

cout<<missing(a,n);
}