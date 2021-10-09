/*
 * Insertion Sort
 * Idea: Similiar to virtually sort cards, divide 2 parts like selection sort, pick and place values from unsorted
 * into right position of sorted parts
 * Time Complexity: O(n^2)
 * */

#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int>& a){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    } 
}

int main(){
    vector<int> a = {4,3,2,10,12,1,5,6};
    insertion_sort(a);
    for(auto x:a){
        cout << x << " ";
    }
    return 0;
}
