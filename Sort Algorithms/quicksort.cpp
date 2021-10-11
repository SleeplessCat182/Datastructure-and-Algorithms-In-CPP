/*
 * Quicksort
 * Pick a pivot then in the left part contains elements < pivot and the right part contains elements > pivot
 * Time Complexity: O(n^2) 
 * */

#include <iostream>
#include <vector>

using namespace std;

void quicksort_recursive(vector<int>& a,int l,int r){
    if(l<=r){
        int key = l + (r-l)/2;
        int i = l;
        int j = r;
        while(i<=j){
            while(a[i] < a[key]){
                i++;
            }
            while(a[j] > a[key]){
                j--;
            }
            if(i<=j){
                swap(a[i],a[j]);
                i++;
                j--;
            }
        }
        if(l<j) quicksort_recursive(a,l,j);
        if(r>i) quicksort_recursive(a,i,r);
    }
}

int partition(vector<int>&a,int& l,int& r){
    int pivot = a[l];
    int i = l;
    int j = r;
    while(i<j){
        do{
            i++;
        }while(a[i] <= pivot);
        do{
            j--;
        }while(a[j] >pivot);
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    swap(a[l],a[j]);
    return j;
}

void quicksort_another_recursive(vector<int>&a,int l,int r){
    if(l<r){
        int j = partition(a, l, r);
        quicksort_another_recursive(a, l, j);
        quicksort_another_recursive(a, j+1,r);
    }
}

int main(){
    vector<int> a = {5,4,3,2,1};
    quicksort_another_recursive(a,0 , a.size());
    for(auto x:a){
        cout << x << " ";
    }
    return 0;
}
