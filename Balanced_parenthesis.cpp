#include<bits/stdc++.h>
using namespace std;
bool solve(string x){
	stack<int>st;
	for(int i=0;i<x.size();i++){
		if(st.empty())st.push(x[i]);
	    else if((x[i]==')' && st.top()=='(') || (x[i]=='}' && st.top()=='{') || (x[i]==']' && st.top()=='[' ) ){
			st.pop();
		}
		else st.push(x[i]);
	}
	if(st.empty()){
		return true;
	}
	else return false;

}
int main() {
	string s;
	cin>>s;
	if(solve(s)){
		cout<<"Yes";
	}
	else cout<<"No";

	return 0;
}
