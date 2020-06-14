class RandomizedSet {
public:
    /** Initialize your data structure here. */
    unordered_map<int,int>h;
    vector<int>x;
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(!h[val]){
        h[val]=x.size()+1;x.push_back(val);
            return true;
        }
        
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(h[val]){
            x.erase(find(x.begin(),x.end(),val));
            h[val]=0;
        return true;
        }
        return false;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        if(x.size()!=0)
        return x[rand() % x.size()];
        return NULL;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */