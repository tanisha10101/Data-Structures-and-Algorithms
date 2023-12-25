#include <iostream>
using namespace std;

//Array declaration:- datatype arrayname[array size];
//Array literal:- int arr[] = {1,2,3,4,5};
/* 
operations in array 
sizeof(array) - elements * no.of bytes 
length -> sizeof(array)/sizeof(array[i]) - 4 


*/


int main(){
    int array[] = {1,2,3,4};

    cout <<sizeof(array) <<endl;
    // cout<<sizeof(array)/sizeof(array[0])<<endl;
    int size = sizeof(array)/sizeof(array[0]);

    for(int idx=0; idx < size; idx++ ){
        cout << array [idx] << endl;
    }

    //for each loop 
    // for(datatype variable:array){}

    cout << "this is for each loop" <<endl;
    for(int element: array){
        cout << element <<endl;
    }

    //while loop 
    cout << "this is while loop" <<endl;
    int index = 0; 
    while(index <size){
        cout << array[index] << endl;
        index ++;
    }

    //INPUT:- 
   //1. FOR LOOP (mostly used)

   char vowels [5];
   for(int i = 0; i<5; i++){
    cin >> vowels[i];
   }

   for(int i = 0; i<5; i++){
    cout << vowels[i] << " ";
   }

   //2. FOR EACH LOOP 

   for(char &element:vowels){
    cin >> element;
   }
    for(int idx = 0; idx<5; idx++){
    cout << vowels[idx] << " ";
   }


//Q1. CALCULATE THE SUM OF ALL THE ELEMENTS IN THE GIVEN ARRAY. 
int Array [] = {3,4,5,6,10};
int sizee = sizeof(Array)/sizeof(Array[0]);
int sum = 0; 
for(int i =0; i<sizee; i++){
    sum = sum + Array[i];
}

cout << sum << endl;

//Q2. FIND MAX VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY. 
int ar [] = {3,4,7,8,9,10};
int sizes = sizeof(ar)/sizeof(ar[0]);
int max = ar[0]; 
for(int i = 0; i<sizes; i++){
    if(ar[i]>max){
        max = ar[i];

    } 
}

cout << max << endl;

//Q3. SEARCH IF A GIVEN ELEMENT IS PRESENT IN THE ARRAY OR NOT. IF IT IS NOT PRESENT THEN RETURN -1 ELSE RETURN THE INDEX. (Linear Search)
int arrays [] = {3,9,7,11,8};
int key = 3; 
int ans = -1; 

for(int i = 0; i<5; i++){
    if(arrays[i]==key){
        ans = i;
        break;
    }
}

cout << "ur index of key is " << ans << endl;

 
    return 0; 
}
