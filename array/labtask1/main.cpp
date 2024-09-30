
#include <iostream>

int remDupli(int arr[], int size)
{
    if (size == 0)
        return 0;

    int initialLength = 1;

    for (int i = 1; i < size; ++i)
    {

        if (arr[i] != arr[initialLength - 1])
        {
            arr[initialLength] = arr[i];
            initialLength++;
        }
    }

    return initialLength;
}

int main()
{
    int arr[] = {20, 20, 30, 40, 50, 50, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newLength = remDupli(arr, size);

    std::cout << "New length of the array: " << newLength << std::endl;
    std::cout << "Updated array: ";
    for (int i = 0; i < newLength; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
