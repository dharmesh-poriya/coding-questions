class Solution {
private:
    bool isGraphContainCycle(vector<vector<int>> &graph,vector<int> &indegree){
        queue<int> q;
        for(int i=0;indegree.size()>i;i++){
            if(0==indegree[i])
                q.push(i);
        }
        int count = 0;
        while(!q.empty()){
            int parent = q.front();
            q.pop();
            for(int child : graph[parent]){
                indegree[child] --;
                if(0==indegree[child])
                    q.push(child);
            }
            count ++;
        }
        // if count  == total nodes then it means that graph not contain cycle otherwise graph contain cycle;
        return count!=graph.size(); 
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses,0);
        
        for(auto p : prerequisites){
            graph[p[1]].push_back(p[0]);
            indegree[p[0]] ++;
        }
        
        bool cycle = isGraphContainCycle(graph,indegree);
        // if graph contain cycle then we can't take all courses because atleast one course depend on other course.
        return !cycle;
    }
};