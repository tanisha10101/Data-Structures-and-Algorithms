#include <iostream>
using namespace std; 

struct node{
    int data; 
    struct node *next;
};

struct node* top = NULL; 


void push(int val){
    node *newnode = new node; 
    newnode ->data = val; 
    newnode ->next = top; 
    top = newnode; 
}

void pop(){
    if(top == NULL){
        cout << "stack is empty" <<endl;
    }
    else{
        cout << "deleted item is: " << top ->data <<endl; 
        top = top->next; 
    }
}


void peek(){
     if(top == NULL){
        cout << "stack is empty" <<endl;
    }
    else{
        cout << top->data <<endl; 
    }

}


void display(){
    struct node *temp; 
    if(top==NULL){
    cout<<"stack is empty";
    }
    else {
    temp = top; 
    while(temp!=NULL){
        cout << temp->data <<endl; 
        temp = temp ->next; 
    }
}
}


int main(){
    push(5); 
    pop (); 
    peek();
    display(); 



    
    return 0;
}































// #include <iostream>
// #define N 5
// using namespace std; 

// int stack[N]; 
// int top = -1; 


// void push(){
//     if(top == N-1){
//         cout << "overflow" <<endl; 
//     }
//     else {
//         top ++ ;
//         int x; 
//         cout << "enter the element" <<endl; 
//         cin >> x; 
//         stack[top] = x; 
//         cout << stack[top] <<endl; 
 
//     }
// }
 

// void pop(){
//     if(top == -1){
//         cout << "nothing present" <<endl;
//     }
//     else {
//         cout << "your deleted item is: " <<endl; 
//         int item = stack[top]; 
//         top --; 
//         cout << "item" <<endl; 
//         cout << "your current stack now: " << stack[top] <<endl; 

//     }
// }

// void peek(){
//     if (top == -1){
//         cout << "nothing present" <<endl; 

//     }
//     else {
//         cout << "your first eleement is: " << stack[top] <<endl; 
//     }
// }


// void display(){
//     for(int i = top; i>=0; i--){
//         cout << "all elements are: " << stack[i] <<endl; 
//     }
// }

// int main(){
//     push(); 
//     pop();
//     peek();
//     display(); 

//     return 0; 

// }