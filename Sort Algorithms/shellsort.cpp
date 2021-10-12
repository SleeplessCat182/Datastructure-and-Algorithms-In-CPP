/*
 * Shellsort
 * Shellsort is like a variation of insertion sort, but instead of ajacent comparion
 * it use the wider gap.
 * Time Complexity: O(n^2)
 * */
#include <iostream>

using namespace std;

void shellsort(int a[],int n){
    for(int gap = n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
            int temp = a[i];
            int j;
            for(j=i;j>=gap && a[j-gap] > temp;j-=gap){
                a[j] = a[j-gap];
            }
            a[j] = temp;
        }
    }
}

int main(){
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    shellsort(a, 10);
    for(int i=0;i<10;i++){
        cout << a[i] << " ";
    }
    return 0;
}
