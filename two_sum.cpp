class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        
        	vector<int> pair;
			vector<int> sorted_numbers=numbers;
			int size=numbers.size();
			sort(sorted_numbers.begin(),sorted_numbers.end());
      vector<int>::iterator first=sorted_numbers.begin();
      vector<int>::iterator second=(sorted_numbers.end()-1);

			while(first<second)
			{
				if(*first+*second<target)
				{
					first++;
					continue;
				}
				else if(*first+*second>target)
				{
					second--;
					continue;
				}
				else
				{
					break;
				}
			}

			for(int i=0;i<size;i++)
			{
				if(numbers[i]==*first || numbers[i]==*second)
				{
					pair.push_back(i+1);
				}
			}

			sort(pair.begin(),pair.end());
			
			return pair;
    

    }
};
