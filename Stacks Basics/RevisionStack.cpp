// Make a stack and push ele. in the stack .
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // // make a stack 
    // stack<int> st;
    // // ele. push in the stack 
    // st.push(10);
    // cout<<st.size()<<endl;
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // // display stack -> Method - 1
    // while(st.size()>0)
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }



    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // display stack -> Method - 2 ( best method -> efficient )
    // we are using a (temp stack) to store the original stack so that the ele. of the stack is not distrub.

    // stack display in normal order 
    stack<int>temp;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    } 

    cout<<endl;
    cout<<endl;

    // stack display in reverse order 
    // we use 1 extra stack -> stack temp.
    while(temp.size()>0)
    {
        cout<<temp.top()<<" ";
        temp.pop();
    } 

}