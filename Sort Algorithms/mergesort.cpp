#include <iostream>
#include <vector>

using namespace std;

//Take an example of: 
//2 8 5 3 9 4 1 7
//0 1 2 3 4 5 6 7
//We split at index 3 which is < 4 (left-mid+1)
//and 5 to the end
void merge(vector<int>& a,int const left,int const mid,int const right){
    int subArrayOne =mid - left + 1;
    int subArrayTwo = right - mid;
    vector<int> leftArray;
    vector<int> rightArray;
    for(int i=0;i<subArrayOne;i++){
        leftArray.push_back(a[left+i]);
    }
    for(int j=0;j<subArrayTwo;j++){
        rightArray.push_back(a[mid+1+j]);
    }

    //Three indices
    int indexOfSubArrayOne = 0;
    int indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
    while(indexOfSubArrayOne<subArrayOne && indexOfSubArrayTwo<subArrayTwo){
        if(leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]){
            a[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }else{
            a[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    
    //Copy the remaining of left array
    while(indexOfSubArrayOne < subArrayOne){
        a[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    } 
    //Copy the remaining of right array
    while(indexOfSubArrayTwo < subArrayTwo){
        a[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
}

void mergeSort(vector<int>& a,int const begin,int const end){
    //Stop recursive here
    if(begin >= end) return;
    int mid = begin + (end-begin)/2;
    mergeSort(a,begin,mid);
    mergeSort(a,mid+1,end);
    merge(a,begin,mid,end);
}

int main(){
    vector<int> a = {2,8,5,3,9,4,1,7};
    mergeSort(a, 0,a.size()-1);
    for(auto x:a){
        cout << x << " ";
    }
    return 0;
}
