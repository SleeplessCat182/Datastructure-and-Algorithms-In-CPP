/*
 * Exchange Sort and Bubble Sort
 * Exchange Sort is very similiar to its cousin, bubble sort.
 * The main difference is that the exchange sort compare the ith element with the rest of the array
 * Bubble sort will compare pair by pair.
 * Time Complexity: O(n^2)
 * */

#include <iostream>
#include <vector>

using namespace std;

void exchange_sort(vector<int>&a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            if(a[j] < a[i]){
                swap(a[j],a[i]);
            }
        }
    }
}

void bubble_sort(vector<int>&a){
    for(int i = 0;i<a.size()-1;i++){
        //Last i element is sorted
        for(int j =0;j<a.size()-i-1;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

void optimized_bubble_sort(vector<int>&a){
    for(int i =0;i<a.size()-1;i++){
        bool swapped = false;
        for(int j=0;j<a.size()-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swapped = true;
            }
        }
        if(!swapped) return;
    }
}

int main(){
    vector<int> a = {5,4,3,2,1};
    bubble_sort(a);
    for(auto x: a){
        cout << x << " ";
    }
    return 0;
}
