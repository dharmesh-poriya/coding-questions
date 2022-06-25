// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
private:
    long long CAP = 1e18;
    long long helper(vector<vector<int>> &graph,vector<int> &visited,int parent,int *cap){
        visited[parent] = true;
        long long needed = 0;
        int count = 0;
        for(int child : graph[parent]){
            if(!visited[child]){
                count ++;
                long long res = helper(graph,visited,child,cap);
                if(-1==res)
                    return -1;
                needed = max(needed,res);
            }
        }
        needed *= count;
        needed += cap[parent-1];
        if(needed<0 || needed>CAP)
            return -1;
        return needed;
    }
public:
    long long minimum_amount(vector<vector<int>> &Edges, int N, int S, int *Cap){
       vector<vector<int>> graph(N+1);
       vector<int> visited(N+1,false);
       for(auto e : Edges){
           graph[e[0]].push_back(e[1]);
           graph[e[1]].push_back(e[0]);
       }
       long long res = helper(graph,visited,S,Cap);
       return res;
    }
};

// { Driver Code Starts.


int main()
 {
	int T;
	cin>> T;
	while (T--)
	{
	    int num, start;
	    cin>>num>>start;
	    int cap[num];
	    for(int i = 0; i<num; i++)
	        cin>>cap[i];
	    
	    vector<vector<int>> Edges(num-1);
	    for(int i=1;i < num;i++){
	        int u, v; cin >> u >> v;
	        Edges[i-1].push_back(u);
	        Edges[i-1].push_back(v);
	    }
	    
	    
    	Solution obj;
	    long long ans = obj.minimum_amount(Edges, num, start, cap);
	    cout << ans << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends