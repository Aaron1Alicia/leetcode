class Solution {
public:
    int singleNumber(int A[], int n) {
		    int result=0;
				while(n!=0){
					result^=A[n-1];
					n--;
				}

				return result;
        
    }
};

