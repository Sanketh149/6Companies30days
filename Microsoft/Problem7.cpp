class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& g) {
        vector<int>graph[n];
        vector<int>deg(n,0);
        for(auto x:g)
        {
            graph[x[1]].push_back(x[0]);
            deg[x[0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(deg[i] == 0) q.push(i);
        }
        vector<int>ans;
        while(q.size())
        {
            auto curr = q.front();
            q.pop();
            ans.push_back(curr);
            for(auto currNode:graph[curr]) 
                if(--deg[currNode] == 0) q.push(currNode);
        }
        return ans.size() == n;
    }
};
