class Solution {
public:
    vector<int> countBits(int n) {

        vector<int> ans;
      
        for(int i = 0; i <= n; i++ ){
            int count = 0;
            int num = i;
            while(num){
                count += num%2;
                num /= 2;
            }
            
            ans.push_back(count);
 
        }  
        return ans;
    }
};

//temp = []
//ans = [0, 1]
// 0 = 0
// 1 = 1
// 2 = 10
// 3 = 11
// 8 = 1000


// 5 = 5%2 = 1
// 5/2 = 2;
// 2%2 = 0
// 2/2 = 1;
// 1%2 = 1
//1/2 = 0;
//011

