#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int> a(n);
    for(auto & i : a)
       cin>>i;
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo = i+1 ,hi = n-1;
        while(lo<hi){
            int current = a[i]+a[lo] + a[hi];
            if(current==t){
                found = true;
            } 
            if(current<t){
                lo++;
            }else{
                hi--;
            }
        }
    }
    if(found){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}