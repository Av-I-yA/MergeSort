#include "../utilities.hpp"

void MergeSort::iterative(vector<int>& arr, int start, int end) {
    int size = arr.size();

    for (int width = 1; width < size; width *= 2) {
        for (int k = 0; k < size; k += 2 * width) {
            int left = k;
            int mid = min(k + width - 1, size-1);
            int right = min(k + 2 * width - 1, size-1);

            MergeSort::merge(arr, left, mid, right);
        }
    }
}