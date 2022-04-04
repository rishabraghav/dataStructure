#include<vector>

class PriorityQueue {
	vector<int> pq;
    
   public:
    PriorityQueue() {
    }


    void insert(int element) {

        pq.push_back(element);
        int CI = pq.size() - 1;
        
        while(CI > 0) {
            int PI = (CI - 1)/ 2;
            if(pq[CI] > pq[PI]) {
                int temp = pq[CI];
                pq[CI] = pq[PI];
                pq[PI] = temp;
            } else {
                break;
            }
            CI = PI;
        }
    }

    int getMax() {
 
        return pq[0];
    }

    int removeMax() {

        if(isEmpty()) {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];
        pq.pop_back();
        
        int pi = 0;
        int lc = 2*pi + 1;
        int rc = 2*pi + 2;
        
        while(lc < pq.size()) {
            int max = pi;
            if(pq[max] < pq[lc]) {
                max = lc;
            }
            if(pq[max] < pq[rc]) {
                max = rc;
            }
            if(pi == max) {
                break;
            }
            
            int temp = pq[max];
            pq[max] = pq[pi];
            pq[pi] = temp;
            
            pi = max;
            lc = 2*pi + 1;
            rc = 2*pi + 2;
        }
        return ans;
    }

    int getSize() { 

        return pq.size();
    }

    bool isEmpty() {
 
        return pq.size() == 0;
    }
};