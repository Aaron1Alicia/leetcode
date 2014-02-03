public class Solution {  
    public boolean searchMatrix(int[][] matrix, int target) {  
        int start = 0;  
        int row = matrix.length;  
        int col = matrix[0].length;  
        int end = row * col - 1;  
        while(start<=end){  
            int mid = start + (end - start)/2;  
            int i = mid/col;  
            int j = mid%col;  
            if (target == matrix[i][j]) return true;  
            else if (target > matrix[i][j]) start = mid + 1;  
            else end = mid - 1;  
        }  
        return false;  
    }  
}  
