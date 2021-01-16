import java.util.*;
class bfs
{
	public static void main(String[] args)
	{
		
	}
	public int bfs(int source,int destination){
		boolean vis[] = new boolean[adj.length];
		int parent[] = new int[adj.length];
		Queue<Integer> q = new LinkedList<>();
		q.add(source);
		parent[source] = -1;
		vis[source]=true;
		while(!q.empty()){
			int curr = q.poll();
			if(curr==destination)
				break;
			for(int neighbour:adj[cur]){
				if(!vis[neighbour]){
					vis[neighbour]=true;
					q.add(neighbour);
					parent[neighbour]=cur;
				}
			}
		}
		int cur = destination;
		int distance=0;
		while(parent[cur]!=-1){
			System.out.println(cur+"->");
			cur = parent[cur];
			distance++;
	    }
	}
}