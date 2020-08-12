#include <iostream>
using namespace std;


//¶ş·Ö²éÕÒ  2 4 5 9 10    
int binary_search(int arr[], int length, int element)
{
    int left = 0, right = length - 1;

    while (left <= right)
    {
        int middle = (right + left) / 2;

        if (arr[middle] < element)
        {
            left = middle + 1;
        }
        else if (arr[middle] > element)
        {
            right = middle - 1;
        }
        else
        {
            return middle;
        }
    }

    return -1;
};

int main()
{
    int array[] = { 2, 3, 5, 8 ,10, };


    cout << binary_search(array, 5, 10) << endl;
}


