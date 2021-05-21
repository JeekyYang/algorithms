class Soulution {
public:
	int minInRorate(vector<int> &nums) {
		const int n = nums.size();
		int first = 0, last = n-1;
		while(first < last) {
			if(nums[first] < nums[last]) {
				return nums[first];
			}

			int mid = first + (last-first)/2;
			if(nums[mid] >= nums[first]) {
				first = mid+1;
			} else {
				last = mid;
			}
		}
		return nums[first];
	}
};
