class Solution {
	string reverseWords(string s) {
		if(s.empty()) return s;
		const int n = s.size();
		string ans;

		reverse(s.begin(), s.end());
		int i = 0;
		while(i < n && s[i] == ' ') i++;
		while(i < n) {
			int start = i;
			while(start < n && s[start] != ' ') start++;
			string word = s.substr(i, start-i);
			reverse(word.begin(), word.end());
			ans += word;

			while(start < n && s[start] == ' ') start++;
			if(start != n) ans.push_back(' ');
			i = start;
		}
		return ans;
	}
};
