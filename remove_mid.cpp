#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int n){
if(n==0){
    st.pop();
    return;
}
int temp=st.top();
st.pop();
solve(st,n-1);
st.push(temp);

}
void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
stack<int>st;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n;i++){
    st.push(arr[i]);
}
solve(st,n/2);
print(st);

}
