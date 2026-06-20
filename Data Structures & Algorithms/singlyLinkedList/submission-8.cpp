struct Node{
    
    Node* next;
    int value;
};
class LinkedList {
public:
    Node* head;
    int size;
    
    LinkedList() {
        head = new Node();
        head->next = NULL;
        size = 0;
    }

    int get(int index) {
        if (index >= size)
        {
            return -1;
        }
        Node* temp = head;
        int current_index = 0;
        while(current_index != index)
        {
            temp = temp->next;
            current_index++;
        }
        return temp->value;

    }

    void insertHead(int val) {
        if (size == 0)
        {
            head->value = val;
            size++;
            return;
        }
    
        Node* temp = new Node();
        temp->value = val;
        temp->next = head;
        head = temp;
        size++;
    }
    
    void insertTail(int val) {
        if (size == 0)
        {
            head->value = val;
            size++;
            return;
        }
        Node* temp = head;
        int currentIndex = 0;
        while (currentIndex < size - 1)
        {
            temp = temp->next;
            currentIndex++;
        }
        Node* newTail = new Node();
        newTail->value = val;
        temp->next = newTail;
        size++;
    }

    bool remove(int index) {
        if (index >= size)
        {
            return false;
        }
        if (index == 0)
        {
            Node* temp = head;
            head = temp->next;
            size--;
            return true;
        }
        int currentIndex = 0;
        Node* temp = head;
        Node* previous = temp;
        while(currentIndex != index)
        {
            previous = temp;
            temp = temp->next;
            currentIndex++;
        }
        previous->next = temp->next;
        size--;
        return true;

    }

    vector<int> getValues() {
        vector<int> values;
        if (size == 0)
        {
            return values;
        }
        Node* temp = head;
        while(temp != NULL)
        {
            values.push_back(temp->value);
            temp = temp->next;
        }
        return values;
    }
};
