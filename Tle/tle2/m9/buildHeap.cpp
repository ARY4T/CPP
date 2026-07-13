#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

class MaxHeap{
    vector<int> heap;

    void heapifyDown(int idx){
        int n = heap.size();

        int leftChild = 2*idx+1;
        int rightChild = 2*idx+2;

        int largest = idx;
        
        if(leftChild < n && heap[leftChild] > heap[largest]){
            largest = leftChild;
        }

        if(rightChild < n && heap[rightChild] > heap[largest]){
            largest = rightChild;
        }

        if(largest != idx){
            swap(heap[largest], heap[idx]);
            heapifyDown(largest);
        }
    } 
    
    void heapifyUp(int idx){
        if(idx == 0) return;

        int parent = (idx-1)/2;

        if(heap[parent] < heap[idx]){
            swap(heap[parent], heap[idx]);
            heapifyUp(parent);
        }
    }

public:
    MaxHeap(vector<int> v){
        heap = v;
    }

    void build(){
        int n = heap.size();

        for(int i=n/2-1; i>=0; --i){
            heapifyDown(i);
        }
    }

    int peak(){
        if(heap.size() == 0) return -1;

        return heap[0];
    }

    void insert(int num){
        heap.push_back(num);

        heapifyUp(heap.size()-1);
    }

    void remove(){
        if(heap.size() == 0) return;

        swap(heap[0], heap[heap.size()-1]);

        heap.pop_back();

        heapifyDown(0);
    }

};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    
}