class Solution {
 public:
    int searchInsert(int A[], int n, int target) {
			if(0==n)
				return 0;

			int left=0;
			int right=n-1;
			int mid;
			int big;

			while(left<=right)
			{
				mid=(right+left)/2;
				if(A[mid]==target)
					return mid;
				else if(A[mid]<target)
				{
				    left=mid+1;
				}
				else
				{
				    right=mid-1;
				}
				    
			}

            if(target>A[mid])
			return mid+1;
			else
			return mid;
    } 
};
