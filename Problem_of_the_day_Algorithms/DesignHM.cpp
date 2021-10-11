class MyHashMap {
public:
    vector<pair<int,int>> mp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        remove(key);
        mp.push_back({key,value});
    }
    
    int get(int key) {
        for(auto i:mp){
            if(i.first==key){
                return i.second;
            }
        }
        return -1;
    }
      /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        if(get(key)!=-1){
            vector<pair<int,int>>::iterator it;
            for(it=mp.begin();it!=mp.end();it++){
                if(it->first==key){
                    mp.erase(it);
                    return;
                }
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
