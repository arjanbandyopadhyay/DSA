class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int n = graph.size();
        vector<int> colour(n, -1);

        for(int i = 0; i < n; i++) {

            if(colour[i] != -1)
                continue;

            queue<int> q;
            q.push(i);
            colour[i] = 0;

            while(!q.empty()) {

                int src = q.front();
                q.pop();

                for(auto it : graph[src]) {

                    if(colour[it] == -1) {

                        colour[it] = !colour[src];
                        q.push(it);
                    }
                    else if(colour[it] == colour[src]) {

                        return false;
                    }
                }
            }
        }

        return true;
    }
};