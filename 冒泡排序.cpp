#include <iostream>
using namespace std;


//冒泡排序  2  5  4  1  3
template <class T>
void bubble_sort(T arr[], int length) {

    for (int k = 0; k < length - 1; k++)
    {
        int flag = 0;

        for (int i = 0; i < length - 1 - k; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                T temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                flag++;
            }
        }
        printf("%d\n", flag);

        if (flag == 0) return;

    }

};


int main()
{
    int array[] = { 2, 3, 12, 11 ,10, };

    bubble_sort(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", array[i]);
    }

}


