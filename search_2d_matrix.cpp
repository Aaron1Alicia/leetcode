class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
			int length=matrix.size();
			if(length==0)
				return false;

			
			int size=matrix[0].size();

			bool ret=binarySearch(0,length-1,size,target,matrix);
			return ret;

    }

		bool binarySearch(int low, int high, int &size, int& target,vector<vector<int> > &matrix)
		{
			if(low==high)
				return search_line(matrix,target,low,size);
			int mid=(low+high)/2;

			if(target>matrix[mid][size-1])
				return binarySearch(mid+1,high,size,target,matrix);
			else
				return binarySearch(low,mid,size,target,matrix);

		}

		bool search_line(vector<vector<int> > &matrix, int& target, int line, int size)
		{
			for(int i=0;i<size;i++)
			{
				if(matrix[line][i]==target)
					return true;
			}

			return false;

		}

};
