#include <iostream>
#include <vector>
#include <unordered_map>

bool hasContiguousSubarray(const std::vector<int>& glasses) {
    int n = glasses.size();
    std::unordered_map<int, int> prefixDiff; // Map to store cumulative differences

    int oddPrefixSum = 0;
    int evenPrefixSum = 0;

    prefixDiff[0] = 0; // Initialize map with an initial difference of 0

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            evenPrefixSum += glasses[i];
        } else {
            oddPrefixSum += glasses[i];
        }

        int diff = oddPrefixSum - evenPrefixSum;

        // Check if a subarray with the same total juice exists
        if (prefixDiff.find(diff) != prefixDiff.end()) {
            return true;
        }

        prefixDiff[diff] = i + 1; // Store the current index for the cumulative difference
    }

    return false; // No such contiguous subarray found
}

int main() {
    int n;
    std::cout << "Enter the number of glasses: ";
    std::cin >> n;

    std::vector<int> glasses(n);
    std::cout << "Enter the units of juice in each glass: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> glasses[i];
    }

    bool result = hasContiguousSubarray(glasses);

    if (result) {
        std::cout << "Iulia and her date can have the same total juice from some contiguous subarray." << std::endl;
    } else {
        std::cout << "No such contiguous subarray found." << std::endl;
    }

    return 0;
}
