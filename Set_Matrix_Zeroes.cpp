class Solution {
public:
    void setZeroes(vector<vector<int> > &matrix) {
        	bool isRowZero=false;
			bool isColZero=false;
			int rowSize=matrix.size();
			int colSize=matrix[0].size();

			for(int i=0;i<colSize;i++)
			{
				if(matrix[0][i]==0)
				{
					isRowZero=true;
					break;
				}
			}

			for(int i=0;i<rowSize;i++)
			{
				if(matrix[i][0]==0)
				{
					isColZero=true;
				}
			}

			for(int i=1;i<rowSize;i++)
				for(int j=1;j<colSize;j++)
				{
					if(matrix[i][j]==0)
					{
						matrix[i][0]=0;
						matrix[0][j]=0;
					}
				}

			for(int i=1;i<rowSize;i++)
			{
					for(int j=1; j< colSize;j++)
					{
				    if(matrix[i][0]==0 || matrix[0][j]==0)
				    {
						   matrix[i][j]=0;
					  }
				}
			}

			if(isRowZero)
			{
				for(int i=0;i<colSize;i++)
				{
					matrix[0][i]=0;
				}
			}

			if(isColZero)
			{
				for(int i=0;i<rowSize;i++)
				{
					matrix[i][0]=0;
				}
			}
			
        
    }
};
