class Solution {
 public:
    vector<int> searchRange(int A[], int n, int target) {
			vector<int> ret;
			ret.push_back(-1);
			ret.push_back(-1);
			if(0==n)
				return ret;

			int left=0;
			int right=n-1;
			int mid;

			while(left<=right)
			{
				mid=(right+left)/2;
				if(A[mid]==target)
					return find_range(mid,A,ret,target);
				else if(A[mid]<target)
					left=mid+1;
				else
					right=mid-1;
			}

			return ret;
    }

    vector<int> find_range(int mid, int A[],vector<int>& ret, int &target)
		{
			int left=mid;
			while(A[left]==target)
			{
				left--;
			}
			ret[0]=left+1;

			int right=mid;
			while(A[right]==target)
			{
				right++;
			}
			ret[1]=right-1;
			return ret;
		}
};
