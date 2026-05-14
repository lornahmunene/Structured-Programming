#include <iostream>
#include <stack>
using namespace std;
class Stack{
    int arr[100];
    int top=-1;
public:
void push (int a ){
    top ++;
    arr[top]=a;
}
void pop(){
    top--;
}
int Top(){
    return arr[top];
}
// int display(){
//     for (int i=0;i<=top;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;


}

