// // Question -:  Reverse stack recursively

// // Display stack recursively -> Normal order


// #include <iostream>
// #include <stack>
// using namespace std;
// void displayrec(stack<int> &st)
// {
//     // Normal order
//     if (st.size() == 0) return;

//     cout << st.top() << " ";
//     int x = st.top();

//     //       Or

//     // int x = st.top();
//     // cout<<x<<" ";

//     st.pop();
//     displayrec(st);
//     st.push(x);
//     // return means khatam and jha se call lga tha vha jao call us function ka bbhi kaam khatam
//     // next line ab run hoga
// }
// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     // display recursively -> normal order
//     displayrec(st); // 50 40 30 20 10
// }







// Imp -:  Display Recursively.


#include <iostream>
#include <stack>
using namespace std;

void displayrecNor(stack<int> &st)
{
    // Normal order -> recursively
    if (st.size() == 0) return; // base case 
    int x = st.top(); 
    cout<<x<<" "; // kaam 
    st.pop();
    displayrecNor(st); // call 
    st.push(x);
}

void displayrecRev(stack<int>& st)
{
    // Reverse order -> recursively
    if(st.size()==0) return; // base case
    int x = st.top();
    st.pop();
    displayrecRev(st); // call 
    cout<<x<<" ";  // kaam 
    st.push(x);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // display recursively -> normal order
    displayrecNor(st); // 50 40 30 20 10
    cout<<endl;
    // display recursively -> reverse order
    displayrecRev(st); // 10 20 30 40 50 

}

// 50 40 30 20 10 
// 10 20 30 40 50 








// // Imp -:  Display Stack Recursively.

// // Ques.1-: Push at bottom recursively 


// #include <iostream>
// #include <stack>
// using namespace std;

// // Display in Normal order -> recursively
// void display(stack<int>& st)
// {
//     if(st.size()==0) return;  
//     int x = st.top();
//     cout<<x<<" "; 
//     st.pop();
//     display(st); 
//     st.push(x);
// }

// // Display in Reverse order -> recursively
// void displayrec(stack<int>& st)
// {
//     if(st.size()==0) return; 
//     int x = st.top();
//     st.pop();
//     displayrec(st); 
//     cout<<x<<" ";  
//     st.push(x);
// }

// // push at bottom -> recursively
// void pushatbottomRec(stack<int>& st,int val)
// {
//     if (st.size() == 0) 
//     {
//         st.push(val);
//         return; 
//     }
//     int x = st.top();
//     st.pop();
//     pushatbottomRec(st,val);
//     st.push(x);
// }

// //  Stack Reverse -> recursively
// void reverse(stack<int>&st)
// {
//      if(st.size()==1) return ;
//      int x = st.top();
//      st.pop();
//      reverse(st);
//      pushatbottomRec(st,x);
// }

// int main()
// {
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);

//     cout<<"Display in the normal order "<<endl;
//     display(st);
//     cout<<endl;

//     cout<<"Display in the reverse order "<<endl;
//     displayrec(st); 
//     cout<<endl;

//     // push at bottom recursively
//     cout<<"Push at the bottom "<<endl<<"Display normal ";
//     pushatbottomRec(st,-100);
//     display(st); 
//     cout<<endl;

//     // reverse stack recursively
//     cout<<"Reverse stack recursively "<<endl<<"Display normal ";
//     reverse(st);
//     display(st); 

// }

// // Display in the normal order 
// // 50 40 30 20 10 
// // Display in the reverse order 
// // 10 20 30 40 50 
// // Push at the bottom 
// // Display normal 50 40 30 20 10 -100 
// // Reverse stack recursively 
// // Display normal -100 10 20 30 40 50 




