class Solution {
public:
    void add(vector<vector<int> > &ret, int a, int b, int c, int d) {
        vector<int> tmp;
        tmp.push_back(a);
        tmp.push_back(b);
        tmp.push_back(c);
        tmp.push_back(d);
        ret.push_back(tmp);
    }

    vector<vector<int> > fourSum(vector<int> &num, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<vector<int> > ans;
        if (num.size() < 4) {
            return ans;
        }

        sort(num.begin(), num.end());
        int left, right;

        for (int j = 0; j < num.size() - 3; j++) {
            if (j > 0 && num[j] == num[j - 1]) {
                continue;
            }

					for(int i=j+1;i < num.size()-2;i++) {
            if (i > j+1 && num[i] == num[i - 1]) {
                continue;
            }

            left = i + 1;
            right = num.size() - 1;
            while (left < right) {
                if (left > i + 1 && num[left] == num[left - 1]) {
                    left++;
                    continue;
                }
                if (right < num.size() - 1 && num[right] == num[right + 1]) {
                    right--;
                    continue;
                }
                if (num[left] + num[right] == target -num[j]- num[i]) {
                    add(ans, num[j],num[i], num[left], num[right]);
                    left++;
                } else if (num[left] + num[right] > target- num[j] - num[i]) {
                    right--;
                } else {
                    left++;
                }
            }
        }
				}
        return ans;
    }
};

