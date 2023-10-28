#include<bits/stdc++.h>
using namespace std;
void solve1(stack<int> &st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    int temp=st.top();
    st.pop();
    solve1(st,data);
    st.push(temp);
}
void solve(stack<int>&st){
    if(st.empty())return;
    int temp=st.top();
    st.pop();
    solve(st);
    solve1(st,temp);
}
void display(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
int n;cin>>n;
stack<int>st;
while(n--){
    int x;
    cin>>x;
    st.push(x);
}
display(st);
solve(st);
display(st);

}
