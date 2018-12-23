#include <bits/stdc++.h>
using namespace std;

vector<int> edges[100100]; // Adjacency vector
int distance[100100]; // Cointains tha distance between some vertices
bool visited[100100]; // Used to verify if vertex was already visited
int parent[100100]; // Used to restore the path

/* Time complexity: O(N + M) */
void bfs(int s){
	queue<int> q;
	q.push(s);
	visited[s] = true;
	parent[s] = -1; // That's how we know when to stop when restoring the path

	while(!q.empty()) {
		int v = q.front();
		q.pop()

		for(int u : edges[v]) {
			if(visited[u]) continue;

			visited[u] = true;
			q.push(u);

			/* Since the BFS is breadth first, the only possible distance to this vertex
			is the distance of it's father + 1 */
			distance[u] = distance[v] + 1;
			parent[u] = v;
		}
	}
}

vector<int> restore_path(int u) {
	vector<int> path;

	if(!visited[u]) {
		printf("There is no path!\n");
		return path;
	}

	/* Here we are starting at the vertex we want to find a path to and going to it's parent
	until we reach the root (-1)*/
	for(int v = u; v != -1; v = p[v]) path.push_back(v);
	reverse(path.begin(), path.end());

	return path;
}

