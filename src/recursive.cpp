#include  "../utilities.hpp"

void MergeSort::recursive(vector<int>& arr, int start, int end) {
    if (start >= end) return;

    int mid = start + (end- start) / 2;
    MergeSort::recursive(arr, start, mid);
    MergeSort::recursive(arr, mid+1, end);
    MergeSort::merge(arr, start, mid, end);
}