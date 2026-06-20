class DynamicArray {
public:
    
    std::vector<int> m_array;
    DynamicArray(int capacity) {
        
        m_array.reserve(capacity);
    }

    int get(int i) {
        return (m_array[i]);
    }

    void set(int i, int n) {
        m_array[i] = n;
    }

    void pushback(int n) {
        m_array.push_back(n);
    }

    int popback() {
        int endVal = m_array[m_array.size() - 1];
        m_array.pop_back();
        return endVal;
    }   

    void resize() {
        
        m_array.reserve(2 * m_array.capacity());
    }

    int getSize() {
        return (m_array.size());
    }

    int getCapacity() {
        return (m_array.capacity());
    }
};
