"""Implement quick sort in Python.
Input a list.
Output a sorted list."""

def partition(array, start, end):
    pivot_index=start
    pivot=array[pivot_index]
    while start<end:
        while start<len(array) and array[start]<=pivot:
            start+=1
        while array[end]>pivot:
            end-=1
        if start<end:
            array[start], array[end] = array[end], array[start]
        array[end], array[pivot_index] = array[pivot_index], array[end]
    return end
    
def quicksort(array,low,high):
    if(low<high):
        p=partition(array,low,high)
        quicksort(array,low,p-1)
        quicksort(array,p+1,high)
    return array

test = [21, 4, 1, 3, 9, 20, 25, 6, 21, 14]
print quicksort(test,0,len(test)-1)
