#include <iostream>
using namespace std;
int main(){

//insertion at begining

int a[50];
int size; 
int num;
cout << "enter the size of the array" <<endl; 
cin >> size; 
if(size >50){
    cout<<"out of bound array"<<endl;
}

else{
cout << "enter the elements of the array" <<endl;

for(int i=0; i<size; i++){
    cin >> a[i];
}

cout << "enter the number that u want to insert in the begining" <<endl;
cin >> num; 

for(int i = size - 1; i>=0; i--){
    a[i+1] = a[i];
}

a[0] = num; 
size++; 

cout << "final array after insertion is: " <<endl;

for(int i = 0; i<size; i++){
    cout << a[i];
    cout << " " <<endl;
}

//insertion at a specific position 

int pos; 
int number; 
cout << "enter the position at which you want to insert an element" <<endl; 
cin >> pos; 

cout << "enter the number that u want to insert after your desired position" <<endl;
cin >> number; 

if(pos<=0 || pos>size+1){
    cout << "invalid position" <<endl; 
}
else {

for(int i = size-1; i>= pos - 1; i--){
    a[i+1] = a[i];

}

a[pos-1] = number;
size++ ; 

cout << "final array after insertion at specific position that you wanted: " <<endl;

for(int i = 0; i<size; i++){
    cout << a[i]<<endl;
}

}


//insertion at the end

int n; 
cout << "enter the number to insert at the end" <<endl; 
cin >> n; 

a[size] = n; 
size++; 

cout << "final array after inserting at end is: " <<endl; 

for(int i = 0; i<size; i++) {
    cout << a[i]; 
}
}

   return 0;
}

//TIME COMPEXITY:
/*

1. Best case - theta(1) in unsorted array. 
2. Worst case - theta(n)

basically it depends on the position. 
so, it's theta(n-P) where P is position. 



*/