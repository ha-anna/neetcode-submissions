#include <algorithm>

class DynamicArray {
private:
    int cap;
    int len;
    int * data;

public:

    DynamicArray(int capacity) {
        cap = capacity;
        data = new int[capacity];
        len = 0;
    }

    int get(int i) {
        return data[i];
    }

    void set(int i, int n) {
        data[i] = n;
    }

    void pushback(int n) {
        if (len == cap) {
            resize();
        }
        data[len] = n;
        len = len + 1;
    }

    int popback() {
        int val = data[len-1];
        len = len - 1;
        return val;
    }

    void resize() {
        int newCap = cap * 2;
        int * temp = new int[newCap];
        std::copy(data, data + cap, temp);
        delete[] data;
        data = temp;
        cap = newCap;
    }

    int getSize() {
        return len;
    }

    int getCapacity() {
        return cap;
    }
};
