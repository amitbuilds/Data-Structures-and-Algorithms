class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int, int>> worker;
        for(int i = 0; i < n ; i++){
            worker.push_back({efficiency[i], speed[i]});
        }
        sort(worker.rbegin(),worker.rend());
        priority_queue<int, vector<int>, greater<int>> pq;
        long long totalSpeed = 0 ;
        long long best = 0;
        long long MOD = 1e9 + 7;
    
        for(auto p : worker){
            int eff = p.first;
            int spd = p.second;
            pq.push(spd);
            totalSpeed+=spd;


            if(pq.size()>k){
                totalSpeed -=pq.top();
                pq.pop();
            }
            best = max(best,totalSpeed*eff);

        }
    return best%MOD;
    }
};