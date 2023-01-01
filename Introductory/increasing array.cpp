#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll inc_array(ll* a , int n ){
ll sum = 0;
for(ll i = 1; i<n ;i++){
    if(a[i]<a[i-1]){
        ll temp = (a[i-1] - a[i]);
        sum = sum + temp;
        a[i] = a[i-1];
    }
}
return sum;

}
int main(){
ll n;cin>>n;
ll* a = new ll[n];
for(ll i = 0 ; i<n; i++)
    cin>>a[i];
cout<<inc_array(a,n);
}