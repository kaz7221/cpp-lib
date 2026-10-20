vector G(N,vector<int>{});
rep(i,N - 1)
{
    int x,y;
    cin >> x >> y;
    x--;
    y--;
    G[x].emplace_back(y);
    G[y].emplace_back(x);
}

const int root = 0;
vector<int> parent(N);
auto dfs = [&G,&parent](int i)
{
    for (auto a : G[i])
    {
        if (a == parent[i]) continue;
        parent[a] = i;
    }
};