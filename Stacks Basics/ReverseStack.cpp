
// Question -:
// Reverse a stack - > T.C. = S.C. = O(n)

#include<iostream>
#include<stack> 
using namespace std;
int main()
{
    // Original stack st 
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Print stack in reverse order in st stack itself 
    // hme st stack me hi reverse order me ele chahiye 
    // Use two extra stack 

    // 1st extra stack gt use
    stack<int>gt;
    while(st.size()>0)
    {
        gt.push(st.top());
        st.pop();
    }

    // 2nd extra stack rt use 
    stack<int>rt;
    while(gt.size()>0)
    {
        rt.push(gt.top());
        gt.pop();
    }

    // Now rt stack se ele. pass hoga st stack me 
    while(rt.size()>0)
    {
        st.push(rt.top());
        rt.pop();
    }

    // Print st stack in reverse order 
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }

// 10 20 30 40 50 

}