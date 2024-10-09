#include <iostream>
using namespace std;

int main(){


    int d;

    cout<<"Enter the size of an array: ";
    cin>>d;

    int* array = new int [d];

    //Taking integers from user
    cout<<"Enter integers of an array!"<< endl;
    for (int i = 0; i<d ; i++){
        cout<<"Integer"<<(i+1)<<":";
        cin>> array[i];
    }


    int* maxPtr = array; // Assume that integer is biggest 
    int* minPtr = array; //Assume that integer is smallest

    int maxIndex = 0 ; int minIndex = 0 ;

    for (int i = 1 ; i<d;i++){

        if(*(array+i)>*maxPtr){
            maxPtr=array+i; // Updating biggest integer
            maxIndex = i; //  Updating biggest integer's index
        }

        if(*(array + i) < *minPtr ){

            minPtr = array + i ; //Updating smallest integer
            minIndex= i; //  Updating smallest integer's index
        }
    }

cout<<"Biggest integer: " << *maxPtr << ", index: "<< maxIndex << endl;
cout<<"Smallest integer: " << *minPtr << ", index: "<< minIndex << endl;

delete[] array;

return 0;
}