class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector<bool>mp;
    MyHashSet() {
       vector<bool>tmp(1000000,false);
        mp=tmp;
    }
    
    void add(int key) {
        mp[key]=true;
    }
    
    void remove(int key) {
        mp[key]=false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return mp[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
