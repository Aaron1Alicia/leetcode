class Solution {
public:
int removeDuplicates(int A[], int n) {
    // Start typing your C/C++ solution below
    // DO NOT write int main() function
    int i=0;
    bool test=false;
    int j;
    if (n<=1) return n;
 
    for (j=1;j<n;j++)
    {  
    if(A[j]==A[i])
    {
        if(test)
        continue;
        else
        {
            A[++i]=A[j];
            test=true;
        }
        
       
    }
    else 
        {                
            A[++i]=A[j];
            test=false;
        }
    }
    return i+1;

}
};
