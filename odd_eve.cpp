#include <iostream>
using namespace std; 
int arr[50];
int size; 
int num; 

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

cout << endl; 
if(size %2 !=0){
    cout << "position must be even to swap: " <<endl; 
}

else {
    for (int i = 0; i<size-1; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp; 
    }
    cout << "interchanged array: " <<endl; 

    for(int i = 0; i<size; i++){
        cout << arr[i] <<" "; 
    }
}


}

int main(){
    interchange();

    return 0; 
}
 