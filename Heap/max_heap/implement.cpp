#include <bits/stdc++.h>

using namespace std;

class max_heap
{
private:
    int *heap;
    int size;
    int heap_capacity;

public:
    max_heap(int capacity)
    {
        heap_capacity = capacity;
        heap = new int[capacity];
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
        if (size == heap_capacity)
        {
            return;
        }
        size++;
        int i = size - 1;
        heap[i] = val;
        while (i != 0 && heap[i] > heap[parent(i)])
        {
            int temp = heap[i];
            heap[i] = heap[parent(i)];
            heap[parent(i)] = temp;
            i = parent(i);
        }
    }
    void heapify(int i)
    {
        int l = left(i);
        int r = right(i);
        int large = i;
        if (l < heap_capacity && heap[l] > heap[i])
        {
            large = i;
        }
        if (r < heap_capacity && heap[r] > heap[large])
        {
            large = r;
        }
        if (large != i)
        {
            int temp = heap[i];
            heap[i] = heap[large];
            heap[large] = temp;
            heapify(large);
        }
    }
};

int main()
{
    return 0;
}