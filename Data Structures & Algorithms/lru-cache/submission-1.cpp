class LRUCache {
public:
    struct Node {
        int data;
        int key;
        Node* next;
        Node* prev;

        Node(int x,int y) : data(x), key(y), next(nullptr), prev(nullptr) {}
    };

    unordered_map<int,Node*> key_add;
    Node* front = new Node(0,0);
    Node* back = new Node(0,1);
    int max_size;
    int size=0;

    LRUCache(int capacity){
        max_size = capacity;
        back->next = front;
        front->prev = back;
    }

    int get(int key) {
        int value;
        Node* new_node;
        if(key_add.count(key)){
            value = key_add[key]->data;
            new_node = key_add[key];
            new_node->prev->next = new_node->next;
            new_node->next->prev = new_node->prev;
            new_node->next = front;
            front->prev->next = new_node;
            new_node->prev = front->prev;
            front->prev = new_node;
        }else{
            return -1;
        }
        return value;

    }
    
    void put(int key, int value) {
        if(key_add.count(key)){
            Node* new_node = key_add[key];
            new_node->data=value;
            new_node->prev->next = new_node->next;
            new_node->next->prev = new_node->prev;
            new_node->next = front;
            front->prev->next = new_node;
            new_node->prev = front->prev;
            front->prev = new_node;
        }else{
        Node* new_node = new Node(value,key);
        key_add[key]=new_node;
        front->prev->next=new_node;
        new_node->prev=front->prev;
        new_node->next=front;
        front->prev=new_node;
        size++;
        }
        if(size>max_size){
            Node* temp = back->next;
            back->next->next->prev=back;
            back->next=back->next->next;
            key_add.erase(temp->key);
            delete temp;
            size--;
        }
        

    }
};
