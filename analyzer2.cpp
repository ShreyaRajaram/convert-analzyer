#include <iostream>
#include <vector>
#include "StringData.h"
#include <string>
#include <chrono>
using namespace std;

int linear_search(vector<string>& container, string element) {
    for (int i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binary_search(vector<string>& container, string element) {
    int low = 0;
    int high = container.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (container[mid] == element)
            return mid;
        if (container[mid] > element)
            high = mid - 1;
        else
            low = mid + 1;
    }


    int main(); {
        std::vector<std::string>& dataset = getStringData();
        string input_string;
        std::cout << "Enter a string: ";
        std::cin >> input_string;
        auto start_lin = std::chrono::high_resolution_clock::now();
        int linear_result = linear_search(dataset, input_string);
        auto end_lin = std::chrono::high_resolution_clock::now();
        chrono::duration<double> linear_seconds = end_lin - start_lin;
        cout << "Index of element: " << linear_result << endl;
        cout << "Linear search time: " << linear_seconds.count() << " seconds" << endl;

        auto start_bin = std::chrono::high_resolution_clock::now();
        int binary_result = binary_search(dataset, input_string);
        auto end_bin = std::chrono::high_resolution_clock::now();
        chrono::duration<double> binary_seconds = end_bin - start_bin;
        cout << "Index of element: " << binary_result << endl;
        cout << "Binary search time: " << binary_seconds.count() << " seconds" << endl;


    }
}