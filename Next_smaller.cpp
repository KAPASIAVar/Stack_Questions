#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> Next_smaller(int *arr,int n){
    vector<int>ans(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[i]<=arr[st.top()])st.pop();
        if(st.empty())ans[i]=-1;
        else ans[i]=arr[st.top()];
        st.push(i);
    }
    return ans;

}
int main(){

int arr[]={6 ,7,3,2,9};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<endl;
vector<int>ans=Next_smaller(arr,n);
for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
}
