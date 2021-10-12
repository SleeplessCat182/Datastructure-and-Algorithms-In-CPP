/*
 * Heapsort
 * Building a max heap or min heap then sort the array like selection sort
 * by finding the max or min element and swap to the root with some sets of rules
 * Time Complexity: O(nlogn)
 * */
#include <iostream>

using namespace std;

//Heapify a subtree rooted with node i, which
//is index in a[], and n i size of array or size of the binary heap
void heapify(int a[],int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && a[left] > largest){
        largest = left;
    }
    if(right<n && a[right] > largest){
        largest = right;
    }

    //There is a larger node
    if(largest!=i){
        swap(a[i],a[largest]);
        //Check if the subtree still in right position
        heapify(a, n, largest);
    }
}

void heapsort(int a[],int n){
    //Build first heap
    for(int i=n/2 -1;i>=0;i--){
        heapify(a, n, i);
    }

    //Swap the largest node to the end of the array, the sorted part
    for(int i=n-1;i>0;i--){
        //The maximum element will be in the first element after heapify
        swap(a[0],a[i]);
        //After swapping the maximum element we start at the root
        heapify(a,i,0);
    }
}

int main(){
    int a[] = {5,4,3,2,1,-2,321,14,-5};
    int size = sizeof(a)/sizeof(int);
    heapsort(a, size);
    for(int i=0;i<size;i++){
        cout << a[i] << " ";
    }
    return 0;
}
