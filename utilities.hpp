#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace MergeSort {
    void recursive(vector<int>& arr, int start, int end);
    void iterative(vector<int>& arr, int start, int end);
    void merge(vector<int>& arr, int start, int mid, int end);
}