// // Stacks -> LIFO or FILO

// #include<iostream>
// #include<stack> 
// using namespace std;
// int main()
// {
//     // Make a stack 
//     stack <int> st;
//     // Print the size of the stack 
//     cout<<st.size()<<endl; // 0 stack is empty 
//     // add ele. in the stack
//     st.push(10);
//     // After addition ele in the stack print the size of the current stack
//     cout<<st.size()<<endl; // 1
//     st.push(20);
//     cout<<st.size()<<endl; // 2
//     st.push(30);
//     cout<<st.size()<<endl; // 3
//     st.push(40);
//     cout<<st.size()<<endl; // 4

//     // Delete the ele in the stack
//     st.pop();
//     cout<<st.size()<<endl; // 3
//     // Print the top ele of the stack
//     cout<<st.top()<<endl; // 30

//     // Print whole stack -> 50 40 30 20 10
//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }


// }




#include<iostream>
#include<stack> 
using namespace std;
int main()
{
    // stack <int> st;
   
    // cout<<st.size()<<endl; 
    // st.push(10);
    // cout<<st.size()<<endl;
    // st.push(20);
    // cout<<st.size()<<endl;
    // st.push(30);
    // cout<<st.size()<<endl;
    // st.push(40);
    // cout<<st.size()<<endl; 
    // st.push(50);
    // cout<<st.size()<<endl; 

    // Delete Ele from the stack 
    // st.pop();
    // cout<<st.size()<<endl; 
    // cout<<st.top()<<endl;


    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Print whole stack -> 50 40 30 20 10
    // Display/Printing our stack in reverse order.


//     Method - 1 -> Display the stack -> not efficient 

//     while(st.size()>0)
//     {
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     50 40 30 20 10 




    // ****************   Now our stack is empty  ***************
    // ab hmare stack ke sare ele. gayab ho gye.
    // aisa print karne per array or LL me nhi hota tha ele. hmare gayab nhi hote the 
    // array / LL me ele.Print karne ka T.C. = O(1) Stack me T.C. = O(n)
    // Now this is Solution -> we store our ele. in other place 


    // Stack me ele. print karne ka T.C. = O(n)
    // becoz we make a (extra new empty stack) -> which takes O(n) extra space.




    // Method - 2 -> Display the stack -> efficient 
    // we will use extra stack 


    stack<int>temp;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }

    // Putting ele. back from temp stack to st stack (maintain the stack st ele. (original stack))

    while(temp.size()>0)
    {
        int x= temp.top();
        temp.pop();
        st.push(x);
    }

    cout<<endl;
    // output-> 50 40 30 20 10 

    cout<<st.top();  // 50  Proved -> (ele.of original stack (st) is maintain their position)
    cout<<endl;
    cout<<temp.top(); // empty 

}

//     //                     Or


//     // stack<int>temp;
//     // while(st.size()>0)
//     // {
//     //     cout<<st.top()<<" ";
//     //     temp.push(st.top());
//     //     st.pop();
//     // }

//     // while(temp.size()>0)
//     // {
//     //     st.push(temp.top());
//     //     temp.pop();
//     // }
//     // cout<<endl;
//     // // output-> 50 40 30 20 10 -> Top to Bottom

//     // cout<<st.top(); // Proof->50 -: fisrt and all ele. of stack (st) (normal) is present.





//     // Print stack's element in the nornal/forward order.

//     stack<int>temp;
//     // stack st ke ele ko temp me push kiya 
//     while(st.size()>0)
//     {
//         temp.push(st.top());
//         st.pop();
//     }

//     // temp ke ele. ko print kiya 
//     while(temp.size()>0)
//     {
//         cout<<temp.top()<<" ";
//         temp.pop();
//     }

//     // // output-> 10 20 30 40 50 -> Bottom to Top 

// }




