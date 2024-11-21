// // push ele in the bottom of the stack.

// #include <iostream>
// #include <stack>
// using namespace std;
// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);

//     // // display normal stack
//     // stack<int>temp;
//     // while(st.size()>0)
//     // {
//     //     cout<<st.top()<<" ";
//     //     temp.push(st.top());
//     //     st.pop();
//     // }
//     // cout<<endl;

//     // Push ele. at the bottom of the stack

//     stack<int> temp;
//     while (st.size() > 0)
//     {
//         cout << st.top() << " ";
//         temp.push(st.top());
//         st.pop();
//     }

//     st.push(70);
//     while (temp.size() > 0)
//     {
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout << endl;


//     while (st.size() > 0)
//     {
//         cout << st.top() << " ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout << endl;


// }

// // 40 30 20 10 
// // 40 30 20 10 70






// *******************  push ele. in the stack at the bottom -: *********************



// #include<iostream>
// #include<stack>
// using namespace std;
// void print(stack<int>st)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
// }

// int main()
// {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     // display stack -> use 1 extra stack temp
//     print(st); // display function 
//     cout<<endl;

//     // Push Ele. At Bottom of the stack.
//     // push ele. st stack to hepler stack 

//     stack<int>helper;
//     while(st.size()>0)
//     {
//         helper.push(st.top());
//         st.pop();
//     }

//     // st stack me ele ko bottom me add kar diya 
//     st.push(100);

//     // helper stack to st stack ele. push again 
//     while(helper.size()>0)
//     {
//         st.push(helper.top());
//         helper.pop();
//     }
//     print(st);

// }

// 50 40 30 20 10 
// 50 40 30 20 10 100 





// Question -:
// *******************  push ele. in the stack at the bottom by using function -: *********************


// #include<iostream>
// #include<stack>
// using namespace std;
// void print(stack<int>st)
// {
//     stack<int>temp;
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
// }

//    void pushatbottom(stack<int> &st,int val)   // stack pass by value hota hai like vector 
// {
//     stack<int>helper;
//     while(st.size()>0)
//     {
//         helper.push(st.top());
//         st.pop();
//     }
//     st.push(100);

//     while(helper.size()>0)
//     {
//         st.push(helper.top());
//         helper.pop();
//     }

// }
// int main()
// {
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     print(st);
//     cout<<endl;
//     pushatbottom(st,100); // stack pass by value 
//     print(st);

// }

// 50 40 30 20 10 
// 50 40 30 20 10 100 





// Question -:
// *******************  push ele. in the stack at any index by using function -: *********************



#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st)
{
    stack<int>temp;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
}

void pushatbottom(stack<int> &st,int val)   // stack pass by value hota hai like vector 
{
    stack<int>helper;
    while(st.size()>0)
    {
        helper.push(st.top());
        st.pop();
    }

    st.push(val);

    while(helper.size()>0)
    {
        st.push(helper.top());
        helper.pop();
    }

}

void pushatidx(stack<int>&st,int idx, int val)
{
    stack<int>helper;
    while(st.size()>idx)
    {
        helper.push(st.top());
        st.pop();
    }

    // push ele ->1000
    st.push(val);

    while(helper.size()>0)
    {
        st.push(helper.top());
        helper.pop();
    }
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    cout<<endl;
    pushatbottom(st,100); // stack pass by value 
    print(st);
    cout<<endl;
    pushatidx(st,3,1000);
    print(st);

}


// 50 40 30 20 10 
// 50 40 30 20 10 100 
// 50 40 30 1000 20 10 100