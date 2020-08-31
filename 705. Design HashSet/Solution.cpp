class MyHashSet {
public:
    /** Initialize your data structure here. */
    int mp[1000000];
    MyHashSet() {
       
    }
    
    void add(int key) {
        mp[key]=1;
    }
    
    void remove(int key) {
        mp[key]=0;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return mp[key]==1;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
