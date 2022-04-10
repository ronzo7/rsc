#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int l=0 , r=n-1;
    int mid = l + (r-l)/2;

    int target;
    cin>>target;
    while(l<=r){
        
        if(v[mid]==target){
            cout << "Found";
            break;
        }

        else if(v[mid]<target)
            l=mid+1;
        else
            r=mid-1;

    }

    return 0;

}

