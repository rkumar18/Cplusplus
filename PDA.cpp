#include <iostream>
using namespace std;
int top= -1;
int Stack[100];

void push(int x){
top++;
Stack[top]=x;
cout<<"push Item in Stack"<< endl;
cout<<"Item added in stack at position "<<top<<endl;
}
void pop(){
cout<<"pop Item from Stack"<< endl;
cout<<"Item deleted from stack at position "<<top <<endl;
top--;

}

int main()
{
    cout << "**************PDA**************" << endl;
    cout<<"Enter the length of string ";
    int a;
    cin>>a;
    if(a%2!=0){
        cout<<"You Enter Wrong input String";
    }

    int input[a];
    for(int i=0;i<a;i++){
        cin>>input[i];
    }
    for(int i=0;i<a;i++){
        if(input[i]==0){
            push(input[i]);
        }
        if(input[i]==1){
            pop();
        }

    }

    if(top==-1){
        cout<<"This language is accepted by Push Down Automata"<<endl;
    }
    else{
         cout<<"This language is not accepted PushDown Automata";
    }
    return 0;
}
