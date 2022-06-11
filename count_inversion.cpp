#include <iostream>
#include <vector>
using namespace std;

int op = 0;

void printarr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            op += (mid + 1 - i);
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= high)
    {
        temp.push_back(arr[j]);
        j++;
    }

    int x = 0;
    for (int k = low; k <= high; k++)
    {
        arr[k] = temp[x];
        x++;
    }

    // temp.clear();
}

void mergeSort(vector<int> &arr, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    vector<int> arr = {-1, 6, 3, 4, 7, 4};

    std::cout << "Before Merge Sort :" << std::endl;
    printarr(arr);

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "After Merge Sort :" << std::endl;
    printarr(arr);

    cout<<"op is -> "<<op<<endl;

    return 0;
}