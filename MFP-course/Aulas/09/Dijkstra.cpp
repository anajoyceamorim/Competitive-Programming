using pii = pair<int,int>;
vector<pii> adj[MAXN]

vector<int> dist(n, INF);
set<pii> q;
dist[s] = 0;
q.insert({0,s});
while(!q.empty()){
	int cur = q.begin()->second;
	q.erase(q.begin());
	
	for(auto [viz, vizp] : adj[cur]){
		if(dist[viz] > dist[cur]+vizp){
			q.erase({dist[viz],viz});
			dist[viz] = dist[cur]+vizp;
			q.insert({dist[viz],viz});
}
	}
}
cout  << ‘\n’;