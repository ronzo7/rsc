#include <bits/stdc++.h>
using namespace std;

int mincost(vector<int> &v , int i , int j){

    if(i==j)
        return 0;

    int k;
    int min = INT_MAX;
    int temp;
    for(k=i ; k<j ; k++){
        temp = mincost(v,i,k) + mincost(v,k+1,j) + v[i-1]*v[k]*v[j];
        if(temp<min)
            min = temp;
    }

    return min;
}
int main(){
    int n;
    int i;
    cin >> n;
    vector<int> v;
    for(i=0 ; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout << mincost(v,1,n-1);
    return 0;

}