# Data structures In CPP
This repo contains many algorithms and data structures in C++. There will be an explanation for each algorithm/data structure.
Feel free to use this as your reference. If there are some bugs or the code misbehaves in any circumstances, please kindly let me know.

## Sort Algorithms
### List of algorithms:

**Insertion Sort**

Imagining that you are playing a card game and you want to sort the card ascendingly. Virtually considering the list of your cards, as an array, then the array will have two parts, the sorted and unsorted part. However, like playing a card game, we will sort the card one by one, in other words; we will sort the ajacent elements one by one only.

The main idea of Insertion sort: Pick a value from unsorted part and place or "Insert" in the right position in sorted part.

```cpp

void insertion_sort(vector<int>& a){
    for(int i=0;i<a.size();i++){
        for(int j=i+1;j<a.size();j++){
            if(a[i] > a[j]){
                swap(a[i],a[j]);
            }
        }
    } 
}
```
As from the code, you can see that after each iteration of j to a.size()-1, the smallest number of the unsorted part will be in the first, second, third position of the array, respectively. Yes in this code the array is sorted ascendingly, in case you want to sort the array descendingly just swap the comparision of a[i] and a[j].

Let take an example:

Assume I have an array a[ ] = {5,4,3,2,1}
Here is what happen after each iteration of j to a.size()-1
- 1 5 4 3 2
- 1 2 5 4 3
- 1 2 3 5 4
- 1 2 3 4 5
- 1 2 3 4 5
- 1 2 3 4 5

**Time Complexity**
1. Best Case: O(n)
2. Average Case: O(n^2)
3. Worst Case: O(n^2)
