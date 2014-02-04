class Solution {
public:
    bool search(int A[], int n, int target) {

			if(0==n)
				return false;

			int start=0;
			int end=n-1;

			while(start<=end)
			{
				int mid=(start+end)/2;
				if(A[mid]==target)
					return true;

				if(A[mid]>A[start])
				{
					if(target>=A[start]&&target<A[mid])
						end=mid-1;
					else
						start=mid+1;
				}
		        else if(A[mid]<A[start])
				{
					if(target>=A[mid+1]&&target<=A[end])
						start=mid+1;
					else
						end=mid-1;
				}
				else
				{
				    while(A[start]==A[mid])
				    {
				        start++;
				    }
				}

			}

			return false;
        
    }
};
