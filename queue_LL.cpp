#include <iostream>
using namespace std; 

struct node{

    int data; 
    struct node *next; 

};

struct node *front = 0; 
struct node *rear = 0; 

void enqueue(int val)
{
    node *newnode = new node; 
    newnode -> data = val; 
    newnode -> next = 0; 

    if(front ==0 && rear ==0){
        front = rear = newnode; 
    }

    else {
        rear -> next = newnode; 
        rear = newnode; 
    }

}


void display(){
    struct node *temp; 
    if(front == 0 && rear == 0){
        cout << "queue empty" <<endl; 

    }
    else{
        temp = front; 
        while(temp != 0){
            cout << temp -> data <<endl; 
            temp = temp -> next; 

        }
    }

}


void dequeue(){
    struct node *temp; 
    temp = front; 

    if(front == 0 && rear == 0){
        cout << "queue empty" <<endl; 
}
else {
    cout << front -> data <<endl; 
    front =  front -> next; 
    delete temp; 

}
}


void peek(){
     if(front == 0 && rear == 0){
        cout << "queue empty" <<endl; 
     } else{
        cout << front -> data <<endl; 
     }

}


int main(){
    enqueue(5);
    display();
    dequeue();
    peek(); 
    display();

}
