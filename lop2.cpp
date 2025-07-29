#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> amap;

    for (int i = 0; i < n; i++)
    {
        amap[arr[i]]++;
        if (amap[arr[i]] == 2)
        {
            cout << arr[i];
            return 0;
        }
    }
}
