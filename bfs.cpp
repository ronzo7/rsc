#include <bits/stdc++.h>
using namespace std;

const int n=500;
vector<int> v[n];
int vis[n];
queue<int> q;

void bfs(int vertex){

    q.push(vertex);
    vis[vertex] = 1;
    while(q.empty()==false){
        cout << q.front() << endl;
        for(auto child:v[q.front()]){

            if(vis[child])
                continue;
            vis[child]=1;
            q.push(child);

        }
        q.pop();

    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int i;
    for(i=0 ; i<m ; i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    bfs(1);
    return 0;
}