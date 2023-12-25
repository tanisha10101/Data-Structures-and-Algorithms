#include <iostream>
using namespace std; 
int main(){


    //Deletion after a specifc position 

    int a[50]; 
    int size; 
    int pos;   //position = index + 1

    cout << "enter the size of the array" << endl; 
    cin >> size; 
    if(size > 50){
        cout << "out of bound or array overflow"<< endl; 
        
    }
    else{

    cout << "enter the elements of the array" << endl; 

    for(int i = 0; i<size; i++){
        cin >> a[i]; 
    }

    cout << "enter the position from where u want to delete the element" <<endl; 
    cin >> pos;   

    if(pos<=0 || pos>size){
        cout << "invalid position" <<endl; 
    }
    else {

        int item = a[pos-1];  //storing the item that we want to delete (optional)

        for(int i = pos-1; i<size-1; i++){ //here we are deleting 
            a[i] = a[i+1];
        }

        size--; 

        cout << "item deleted is: " << item << endl; 

        cout << "your final array after deletion from ur desired position: " <<endl; 

        for(int i = 0; i<size; i++){
            cout << a[i]; 
        }


    //deletion from the end 

        int items = a[size];  //optional if u want to store the deleted element too 
        size --; 
        cout << "item deleted is: " << items << endl; 
        cout << "your final array after deletion from end: " <<endl; 

        for(int i = 0; i<size; i++){
            cout << a[i]; 
        }



        //deleting from begining 
        int itemss = a[0];  //(optional) if u want to store the deleted element too 
        for(int i = 0; i<size - 1; i++){
            a[i] = a[i+1]; 
        }

        size--; 
        cout << "item deleted is: " << itemss << endl; 
        cout << "your final array after deletion from begining: " <<endl; 

        for(int i = 0; i<size; i++){
            cout << a[i]; 
        }


    }
    }


    return 0; 
}