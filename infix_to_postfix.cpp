#include <bits/stdc++.h>
#include <stack>
using namespace std;

int prec(char c){
	if(c=='^')
		return 3;
	if(c=='/' || c=='*')
		return 2;
	if(c=='+' || c=='-')
		return 1;
	else
		return -1;
}

void infixtopostfix(string s){
	string result = "";
	stack<char> st;
	for(int i=0; i<s.length(); ++i){
		char c = s[i];
		
		if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
			result+=c;
		}
		
		else if(c=='('){
			st.push('(');
		}
		
		else if(c==')'){
			while(st.top()!='('){
				result += st.top();
				st.pop();
			}
			st.pop();
		}
		
		else{
			while(!st.empty() && prec(s[i])<=prec(st.top())){
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while(!st.empty()){
		result += st.top();
		st.pop();
	}
	cout<<result<<endl;
}

int main(){
	string str = "3-4+5";
	infixtopostfix(str);
	return 0;
}
