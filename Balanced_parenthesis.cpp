#include <bits/stdc++.h>
using namespace std;
bool is_valid(string inp)
{
    stack<char> st;
    for (auto i : inp)
    {
        if (st.empty())
            st.push(i);
        else if(st.top()=='[' && i==']')st.pop();
        else if(st.top()=='{' && i=='}')st.pop();
        else if(st.top()=='(' && i==')')st.pop();
        else st.push(i);

    }
    if(st.empty())return 1;
    return 0;
}
int main()
{
    string st;
    cin>>st;
    if(is_valid(st))cout<<"Balanced\n"<<"\t--End--"<<endl;
    else cout<<"Not Balanced"<<"\t--End--"<<endl;
}
