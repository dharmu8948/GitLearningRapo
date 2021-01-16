import java.util.*;
import java.io.*;

public class Main{
    public static int cycles = 0;

    public static int[] nextArray(FastReader sc1, int n) {
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc1.nextInt();
        }
        return arr;
    }

    public static void printMatrix(int[][] mat) {
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[0].length; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }

    public static void dfs(int node, int[] vis, long[] dist, long[] tdist, long[] cost) {
        vis[node] = 1;
        
        ArrayList<Integer> set = tree[node];
        for (int ele : set) {
            if (vis[ele] == 0) {
                dist[ele] = dist[node] + cost[ele];
                tdist[ele] = tdist[node] + dist[ele];
                dfs(ele, vis, dist, tdist, cost);
            }
        }
        
    }

    public static void addEdge(int u, int v, HashMap<Integer, HashSet<Integer>> tree) {
        if (tree.containsKey(u)) {
            HashSet<Integer> set = tree.get(u);
            set.add(v);
            tree.put(u, set);
        } else {
            HashSet<Integer> set = new HashSet<>();
            set.add(v);
            tree.put(u, set);
        }
    }

    public static int gcdf(int a, int b) {
        if (a == 0)
            return b;

        return gcdf(b % a, a);
    }

    public static ArrayList<Integer>[] tree = new ArrayList[100001]; 
    
    public static int bfs(int node, long[] dist, long[] tdist, long[] cost, int n){
        Queue<Integer> queue = new LinkedList<>();
        queue.add(node);
        tdist[node] = dist[node];

        while(!queue.isEmpty()){
            int cnode = queue.remove();
            ArrayList<Integer> set = tree[cnode];
            for(int ele : set){
                if(dist[ele] == 0){
                    dist[ele] = dist[cnode] + cost[ele];
                    tdist[ele] = tdist[cnode] + dist[ele];
                    queue.add(ele);
                }
            }
        }

        int farn = -1;
        long fdist = 0L;

        for(int i=1; i<=n; i++){
            if(tdist[i] > fdist){
                fdist = tdist[i];
                farn = i;
            }
        }

        return farn;
    }

    public static void main(String[] args) {
        FastReader sc1 = new FastReader();
        StringBuilder sb = new StringBuilder();

        int n = sc1.nextInt();
        long[] cost = new long[n+1];

        for(int i=1; i<=n; i++){
            tree[i] = new ArrayList<>();
        }

        for(int i=0; i<n-1; i++){
            int u = sc1.nextInt();
            int v = sc1.nextInt();
            tree[u].add(v);
            tree[v].add(u);
        }

        for(int i=1; i<=n; i++){
            cost[i] = sc1.nextInt();
        }

        long mdist = 0L;
        int st = 1;
        int times = 0;
        int[] done = new int[n+1];
        

        while(times < Math.min(100, n)){
            long[] dist = new long[n+1];
            long[] tdist = new long[n+1];
            done[st] = 1;

            int[] vis = new int[n+1];
            dist[st] = cost[st];
            tdist[st] = cost[st];
            dfs(st, vis, dist, tdist, cost);
            
            //System.out.println(i);
            //System.out.println(Arrays.toString(dist));
            //System.out.println(Arrays.toString(tdist));

            long cmax = 0L;
            for(int j=1;j<=n;j++){
                mdist = Math.max(mdist, tdist[j]);
                if(tdist[j] > cmax && done[j] == 0){
                    cmax = tdist[j];
                    st = j;
                }
            }


            times++;
        }

        System.out.print(mdist);
    }

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}s