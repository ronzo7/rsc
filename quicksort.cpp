#include <bits/stdc++.h>
using namespace std;


int part(vector<int> &v , int s , int e){

    int i , c=0;
    int x = v[s];
    for(i=s+1 ; i<=e ; i++){
        if(x>v[i])
            c++;
    }
    if(c){
        swap(v[s],v[s+c]);
    }
    x = v[s+c];
    int j;
    i=s , j=e;
    while(i<(s+c) && j>(s+c)){
        if(v[i]<x)
            i++;
        if(v[j]>x)
            j--;
        
        if(v[i]>x && v[j]<x){
            swap(v[i--],v[j--]);
        }
    }

    return (s+c);

}

void quick(vector<int> &v , int s , int e){

    if(s>=e)
        return ;
    
    int p = part(v,s,e);
    quick(v,s,p-1);
    quick(v,p+1,e);
}

int main(){

    int n;
    cin >> n;
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    quick(arr , 0 , n-1);

    for(auto itr : arr){
        cout << itr <<" ";
    }
    cout << endl;
    return 0;
}