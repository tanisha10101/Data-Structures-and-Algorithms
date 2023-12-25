#include <iostream>
#define N 8
using namespace std; 

char stack[N];
int top = -1;

void Push(char c){
           if(top==N-1){

            cout<<"stack full"<<endl;
       
           }
           else{
               top ++;
               stack[top] = c;
           }
           
}

char Pop(){
    if(top == -1){
        cout << "stack is empty or it is underflow" << endl;
        char x = 0; 
        return x; 
        
    }
    else {
        cout << "Now, current stack is: " <<endl; 
        cout<<stack[top]<<endl;
        char item = stack[top];  // to store your deleted value
        top --;
        return item;
    }


}

int main(){
           string str;
           cout << "enter string: " << endl; 
           cin>>str;
           for (int i = 0;i<str.size();i++){
                Push(str[i]);           
           }
           
           string reverse = "";
           while(top!=-1){
                      reverse = reverse + Pop();
           }
           cout<<"reverse string: " << reverse<<endl;

}