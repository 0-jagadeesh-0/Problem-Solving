#include <iostream>

using namespace std;

class min_heap
{
private:
    int *heap;
    int size;
    int heap_capacity;

public:
    min_heap(int capacity)
    {
        heap_capacity = capacity;
        heap = new int[heap_capacity];
        size = 0;
    }
    int parent(int i)
    {
        return (i - 1) / 2;
    }
    int left(int i)
    {
        return 2 * i + 1;
    }
    int right(int i)
    {
        return 2 * i + 2;
    }
    void insert(int val)
    {
        size++;
        int i = size - 1;
        heap[i] = val;
        while (i != 0 && heap[parent(i)] > heap[i])
        {
            int temp = heap[parent(i)];
            heap[parent(i)] = heap[i];
            heap[i] = temp;
            i = parent(i);
        }
    }
};

int main()
{
    return 0;
}