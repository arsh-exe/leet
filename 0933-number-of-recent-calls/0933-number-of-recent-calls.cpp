class RecentCounter {
public:
        vector<int> rec;
        int s;
    RecentCounter():s(0) {
    }
    
    int ping(int t) {
        rec.push_back(t);
        while(rec[s]<t-3000){
            s++;
        }
        return rec.size()-s;

    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */