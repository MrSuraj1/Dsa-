#include<iostream>
#include<unordered_set> 
using namespace std;


bool subarrayzero(int arr[], int n) {
    unordered_set<int> asum; 
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

                if (sum == 0 || asum.find(sum) != asum.end()) {
            return true;
        }

        
        asum.insert(sum);
    }

    return false;
}

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (subarrayzero(arr, n)) {
        cout << "Yes, Subarray with sum 0 exists." << endl;
    } else {
        cout << "No, Subarray with sum 0 does not exist." << endl;
    }

    return 0;
}
