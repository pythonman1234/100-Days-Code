What is Linear Search?

A linear search, sometimes referred to as a sequential search, simply scans each element one at a time. In this search, an array is sequentially traversed from the first element until the element is found or the end of the array is reached. This method can only be suitable for searching over a small array or an unsorted array.

Algorithm

Assume we need to find an element that is in an array in random order.
Start with the first position and compare it to the target in order to search for a target element.
If the current element matches the target element, return the position of the current element.
If not, move on to the next one until we reach the very end of an array.
If still unable to find the target, return -1.

What is Binary Search?

The Binary search method is only suitable for searching in a sorted array. In this method, the element that has to be searched is compared to the array's middle element. Search is considered successful only if it matches the target. The binary search algorithm uses the divide-and-conquer approach, it does not scan every element in the list, it only searches half of the list instead of going through each element, Hence said to be the best searching algorithm because it is faster to execute as compared to Linear search.

Algorithm
Start with the middle element of the array as a current key.
If the middle element value matches the target element then return the index of the middle element.
Else check if the target element is lesser than the middle element, then continue the search in the left half.
If the target element is greater than the middle element, then continue the search in the right half.
Check from the second point repeatedly until the value is found or the array is empty.
If still unable to find the target, return -1.
