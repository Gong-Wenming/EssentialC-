#include<iostream>
#include<string>
#include<vector>
#include "/home/ming/Program/EssentialC++/chapter04_Object-Based_Programming/head/head4.1.h""


using namespace std;

int main(){
    Stack stack;
    string str;
    string elem;

    if(stack.empty())
        cout<<"stack is empty!\n";
    while (cin >> str)
    {
        stack.push(str);
        cout<<str<<" into stack!\n";
        cout<<endl;
    }

    cout<<"栈顶元素是：";
    if(stack.peek(elem))
        cout<<elem<<endl;
    cout<<"栈大小是";
    int size = stack.size();
    cout<<size<<endl;
    
    cout<<"删除的元素是：";
    if(stack.pop(elem))
        cout<<elem<<endl;
    cout<<"栈大小是";
    size = stack.size();
    cout<<size<<endl;
    
    cout<<"栈顶元素是：";
    if(stack.peek(elem))
        cout<<elem<<endl;
}