///将数组中的所有零移到数组末尾

#include <iostream>
using namespace std;

void moveZeroToTheEnd(int [], int);


int main(){
    //Array Example
    int array[]={0,2,3,0,0,1,0,5,2,0};
    int numItems = sizeof(array)/sizeof(array[0]);

    moveZeroToTheEnd(array, numItems);

    //Print out the result
    for (int i=0; i<numItems; ++i) {
        cout<<array[i]<<" ";
    }
}

void moveZeroToTheEnd(int array[], int numItems){
    int count=0;

    for (int i=0; i<numItems; ++i) {
        if (array[i]!=0) {
            array[count++]=array[i];
        }
    }

    //Fill the left of the array to 0
    for (int j=count;j<numItems; ++j) {
        array[j]=0;
    }
}
