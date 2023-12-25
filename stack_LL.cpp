#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;

}; 


struct Node* top = NULL;


//PUSH

void push(int val) {
   Node* newnode = new Node; 

   newnode->data = val;
   newnode->next = top;
   top = newnode;
}


//POP

void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}


//DISPLAY

void display() {
   struct Node* temp;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      temp = top;
      cout<<"Stack elements are: ";
      while (temp != NULL) {
         cout<< temp->data <<" ";
         temp = temp->next;
      }
   }
   cout<<endl;
}


//PEEK

void Peek(){
    if(top ==NULL){
        cout << "stack is empty" <<endl; 
    }
    else {
        cout << top->data <<endl; 
    }
}




//SWITCH STATEMENTS

int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Peek stack" << endl; 
   cout<<"5) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            Peek();
            break; 
         }
         case 5: {
            cout<<"Exit"<<endl;
            break;
         }
         case 6: 
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=5);
   return 0;
}