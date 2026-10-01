class LRUCache {
public:
class Node{
    public:
    int key,val;
    Node*pre;
    Node*next;
    Node(int k,int v){
        key=k;
        val=v;
        pre=next=NULL;

    }
};

    Node*head=new Node(-1,-1);
    Node*tail=new Node(-1,-1);
    unordered_map<int,Node*>m;
    int limit;

    void delNode(Node*oldNode){
        Node*oldPre=oldNode->pre;
        Node*oldNext=oldNode->next;
        oldPre->next=oldNext;
        oldNext->pre=oldPre;
    }
    void addNode(Node*newNode){
        Node*oldNext=head->next;
        head->next=newNode;
        oldNext->pre=newNode;

        newNode->next=oldNext;
        newNode->pre=head;
    }

    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->pre=head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()){
            return -1;
        }
        Node*ansNode=m[key];
        int ans=ansNode->val;
        m.erase(key);
        delNode(ansNode);

        addNode(ansNode);
        m[key]=ansNode;

        return ans;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node*oldNode=m[key];
            delNode(oldNode);
            m.erase(key);
        }
        if(limit==m.size()){
            m.erase(tail->pre->key);
            delNode(tail->pre);
        }
        Node*newNode=new Node(key,value);
        addNode(newNode);
        m[key]=newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */