#include <iostream>
using namespace std; 
int arr[50];
int size; 
int num; 
int count = 0; 

void interchange(){

int size; 
cout << "size of array"<<endl; 
cin >> size; 

cout << "enter the elements of array: "<<endl; 
for(int i = 0; i<size; i++){
    cin >> arr[i]; 

}
for(int i = 0; i<size; i++){
    cout << arr[i] <<" "; 
}
cout << "non zero elements are: " <<endl; 
for(int i = 0; i<size; i++){
    int count = 0; 
    if(arr[i]!=0){
        count ++; 
        cout << arr[i] << " " ; 

    }

}



}


int main(){
    interchange();
    return 0; 
}