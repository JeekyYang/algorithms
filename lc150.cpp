class Solution {
	int evalRPN(vector<string> tokens) {
		stack<int> st;
		for(auto t:tokens) {
			if(isOperator(t)) {
				int num1 = st.top();
				st.pop();
				int num2 = st.top();
				st.pop();
				st.push(cal(num1, num2, t));
			} else {
				st.push(stoi(t));
			}
		}
		return st.top();
	}

	bool isOperator(string t) {
		return t == "+" || t == "-" || t == "*" || t == "/";
	}

	int cal(int num1, int num2, string op) {
		if(op == "+") {
			return num1+num2;
		} else if(op == "*") {
			return num1*num2;
		} else if(op == "/") {
			return num2/num1;
		} else {
			return num2-num1;
		}
	}
};
