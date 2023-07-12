#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,vector<int>&ans){
	stack<int>st;
	for(int i=0;i<n;i++){
		while(!st.empty() && arr[st.top()]<arr[i]){
			st.pop();
		}
		if(st.empty()){
			ans.push_back(i+1);
		}
		else{
			ans.push_back(i-st.top());
		}
		st.push(i);
	}

}
int main() 
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	vector<int>ans;
	solve(arr,n,ans);
	for(auto i:ans)cout<<i<<" ";
	cout<<"END";
	return 0;
}
