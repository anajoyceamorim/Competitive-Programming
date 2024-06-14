vector<int> dist(n, INF);
queue<int> q;
dist[s] = 0;
q.push(s);
while(!q.empty()){
	int cur = q.front();
	q.pop();
	
	for(int viz : adj[cur]){
		if(dist[viz] > dist[cur]+1){
			dist[viz] = dist[cur]+1;
			q.push(viz);
}
	}
}
cout << dist[t] << ‘\n’;
