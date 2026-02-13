#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include "utilities.hpp"

using namespace std;

int main() {
    std::string line;

    std::ifstream infile_re("samples.txt");
    std::ofstream outfile_re("results_re.txt");
    while (std::getline(infile_re, line)) {
        std::stringstream ss(line);
        std::vector<int> current_array;
        int value;

        while (ss >> value) {
            current_array.push_back(value);
        }

        long size = current_array.size();
        auto start = chrono::high_resolution_clock::now();
        MergeSort::recursive(current_array, 0, size-1);
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
        outfile_re << duration.count() << endl; 
    }
    infile_re.close();
    outfile_re.close();

    std::ifstream infile_it("samples.txt");
    std::ofstream outfile_it("results_it.txt");
    while (std::getline(infile_it, line)) {
        std::stringstream ss(line);
        std::vector<int> current_array;
        int value;

        while (ss >> value) {
            current_array.push_back(value);
        }

        long size = current_array.size();
        auto start = chrono::high_resolution_clock::now();
        MergeSort::iterative(current_array, 0, size-1);
        auto end = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
        outfile_it << duration.count() << endl; 
    }
    infile_it.close();
    outfile_it.close();
    
}