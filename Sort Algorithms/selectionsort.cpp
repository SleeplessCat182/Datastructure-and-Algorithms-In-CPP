/*
 * Selection Sort
 * Idea: Divide the array into 2 parts, the first part is the sorted part and the other is unsorted part.
 * Pick minimum element in unsorted part and 'swap' to sorted part.
 * Time Complexity: O(n^2)
 */

#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& a){
    for(int i=0;i<a.size();i++){
        int min_index = i;
        for(int j=i+1;j<a.size();j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        swap(a[i],a[min_index]);
    }
}

int main(){
    vector<int> a = {5,4,3,2,1};
    selection_sort(a);
    for(auto x: a){
        cout << x << " ";
    }
    return 0;
}
