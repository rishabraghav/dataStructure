#include <vector>

class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin() {
        //swapping
        if(isEmpty()) {
            return 0;
        }
        int ans = pq[0];
        
        pq[0] = pq[pq.size() - 1];
        
        pq.pop_back();  // min removed
        
        int parentIndex = 0;
        int leftChild = 2*parentIndex + 1;
        int rightChild = 2*parentIndex + 2;
        
        while(leftChild < pq.size()) {
            int min = parentIndex;
            
            if(pq[min] > pq[leftChild]) {
                min = leftChild;
            } 
            if(rightChild < pq.size() && pq[min] > pq[rightChild]) {
                min = rightChild;
            }
            if(parentIndex == min) {
                break;
            }
            int temp = pq[parentIndex];
            pq[parentIndex] = pq[min];
            pq[min] = temp;
            
            parentIndex = min;
            leftChild = 2*parentIndex + 1;
        	rightChild = 2*parentIndex + 2;
        }
        return ans;
    }
};