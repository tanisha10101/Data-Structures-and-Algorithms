#include <iostream> 
using namespace std; 

int arr[50]; 

void reverse(){
    int size;
    cout << "enter size of array: " <<endl;
    cin>> size; 

    cout << "enter elements: " <<endl; 
    for(int i = 0; i<size; i++){
        cin >> arr[i]; 

    }
    cout << "array is: " << endl; 
    for(int i = 0; i<size; i++){
        cout << arr[i] <<" "; 

    }
    //main function: 

    for(int i = 0; i<size/2; i++){
        int temp = arr[i]; 
        arr[i] = arr[size-i-1]; 
        arr[size-i-1] = temp; 
    }

    cout << endl;

    cout << "reversed array: " <<endl; 
    for(int i = 0; i<size; i++){
        cout << arr[i] <<endl; 
    }

}

int main(){

    reverse();

    return 0; 
}
