class Solution {
public:
    int my_abs(int a, int b) {
	    if(a>=b)
				return a-b;
			else
				return b-a;
    }

    int  threeSumClosest(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        //vector<vector<int> > ans;
        //if (num.size() < 3) {
         //   return ans;
				// return 
        //}
		int closest_sum=num[0]+num[1]+num[2]; 

        sort(num.begin(), num.end());
        int left, right;
        for (int i = 0; i < num.size() - 2; i++) {
           
            left = i + 1;
            right = num.size() - 1;
            while (left < right) {
              
                if (my_abs(num[left] + num[right]+num[i],target) < my_abs(closest_sum,target) ) {
									  closest_sum=num[left]+num[right]+num[i];
                } else if (num[left] + num[right] +num[i] > target) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return closest_sum;
    }

    
};
