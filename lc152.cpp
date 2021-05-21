class Soultion {
public:
	int maxProduct(vector<int> &nums) {
		int r = nums[0];
		int imin = nums[0];
		int imax = nums[0];
		for(int i = 1; i < nums.size(); i++) {
			int tmax = max(imax*nums[i], max(imin*nums[i], nums[i]));
			int tmin = min(imin*nums[i], min(imax*nums[i], nums[i]));
			imax = tmax;
			imin = tmin;
			r = max(r, tmax);
		}
		return r;
	}
};
