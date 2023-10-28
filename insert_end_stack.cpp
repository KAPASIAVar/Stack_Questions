#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    int temp=st.top();
    st.pop();
    solve(st,data);
    st.push(temp);
}
void print(stack<int>st){
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
int main(){
int n;cin>>n;
stack<int>st;
while(n--){
    int x;cin>>x;
st.push(x);
}
int data;
cin>>data;
solve(st,data);

print(st);

}
