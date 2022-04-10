#include <bits/stdc++.h>
using namespace std;

void select(vector<int> &v){

    int n = v.size();
    int i , j;
    int min;

    for(i=0 ; i<n-1 ; i++){

        min = i;
        for(j=i+1 ; j<n ; j++){
            if(v[j]<v[min])
            min = j; 
        }

        swap(v[min],v[i]);

    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    int i;
    for(i=0 ; i<n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    select(v);

    for(auto itr:v){
        cout << itr <<" ";
    }

    return 0;

}