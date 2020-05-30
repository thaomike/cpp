#include<bits/stdc++.h>
using namespace std;

void init(){

}

void dfs(int u)
{
    int v;
    for(v = 1;v<=n;v++) {vs[v] = 0;e[v] = 0;}
    for(v=1;v<=n;v++) if(vs[v] == 0) dfs(v);
}

void bfs(int u){
    int v;
    for(v = 1;v<=n;v++) {vs[v] = 0;e[v] = 0;}
    for(v=1;v<=n;v++) if(vs[v] == 0) bfs(v);
}

int main()
{
    init();
}