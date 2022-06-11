#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
using namespace std;
using namespace std::chrono;

void normal_sort(int x)
{
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        v.push_back(rand());
    }

    sort(v.begin(), v.end());

}

void create_heap(int x)
{
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        v.push_back(rand());
    }

    make_heap(v.begin(), v.end());
    sort_heap(v.begin(), v.end());
}

int main()
{
    // Initializing a vector
    // vector<int> v1 = {20, 30, 40, 25, 15};

    // Converting vector into a heap
    // using make_heap()
    // make_heap(v1.begin(), v1.end());

    // for (auto &x : v1)
    // {
    //     cout << x << " ";
    // }

    // Get starting timepoint
    auto start = high_resolution_clock::now();

    normal_sort(1000000);

    // Get ending timepoint
    auto stop = high_resolution_clock::now();

    // Get duration.Substart timepoints to
    // get durarion. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by normal_sort: "
         << duration.count() << " microseconds" << endl;

    // Get starting timepoint
    start = high_resolution_clock::now();

    create_heap(1000000);

    // Get ending timepoint
    stop = high_resolution_clock::now();

    // Get duration.Substart timepoints to
    // get durarion. To cast it to proper unit
    // use duration cast method
    duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by create_heap: "
         << duration.count() << " microseconds" << endl;
    return 0;
}