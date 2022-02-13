// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends

//closing brackets are: ) } ]
bool valid(string s)
{
    // code here
    stack<char> st;
    for(auto i:s){
        // if(i!=')' and i!='}' and i!=']')
        // st.push(i);
        if(i=='(' or i=='{' or i=='[')
        st.push(i);
        else{
            if(i==')'){
                if(!st.empty() and st.top()=='('){
                    st.pop();
                }
                else
                return false;
            }
            else if(i=='}'){
                if(!st.empty() and st.top()=='{'){
                    st.pop();
                }
                else
                return false;
            }
            else{
                if(!st.empty() and st.top()=='['){
                    st.pop();
                }
                else
                return false;
            }
        }
    }
    if(st.size()>0) 
    return false;
    return true;
}