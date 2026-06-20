class DynamicArray {
public:
    
    int* m_array;
    int m_capacity;
    int m_size;
    DynamicArray(int capacity) {
        
        m_array = new int[capacity];
        m_capacity = capacity;
        m_size = 0;
    }

    int get(int i) {
        return (m_array[i]);
    }

    void set(int i, int n) {
        m_array[i] = n;
    }

    void pushback(int n) {
        if (m_size == m_capacity)
        {
            resize();
        }
        m_array[m_size] = n;
        m_size++;
    }

    int popback() {
        int endVal = m_array[m_size - 1];
        m_array[m_size - 1] = 0;
        m_size--;
        return endVal;
    }   

    void resize() {
        m_capacity += m_capacity;
        int* temp = new int[m_capacity];
        for (int i = 0; i < m_size; i++)
        {
            temp[i] = m_array[i];
        }
        delete[] m_array;
        m_array = temp;
    }

    int getSize() {
        return (m_size);
    }

    int getCapacity() {
        return (m_capacity);
    }
};
