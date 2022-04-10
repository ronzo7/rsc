#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    int n , i;
    cin >> n;
    for( i=0 ; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int min = INT_MIN;
    int sum=min;
    int lm=0;
    for(i=0 ; i<n ; i++){

        lm = max(lm+v[i],v[i]);
        if(lm>sum)
        {
            sum = lm;
        }
    }
    cout<<sum;
    return 0;

}