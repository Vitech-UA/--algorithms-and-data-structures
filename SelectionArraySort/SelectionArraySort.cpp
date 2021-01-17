// SelectionArraySort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void PrintArray(int* array);
static void SwapArray(int* array, int SrcIndex, int DstIndex);
int FindIndexMinInArray(int* array, int SearchRange, int arraySize);
void SelectionSort(int* array, int arraySize);

int main()
{
    int massiv[10] = {34,45,23,45,67,453,89,90,123,345};
    PrintArray(massiv);
   // std::cout << "Min Array index: " << FindMinInArray(massiv, 7, 10) << "\n";

    std::cout <<"\n";



    SelectionSort(massiv, 10);
    PrintArray(massiv);


}

int FindIndexMinInArray(int* array, int SearchRange, int arraySize)
{
    int min = SearchRange;

    for (int i = SearchRange; i < arraySize; i++)
    {
        if (array[min] > array[i])
        {
           min = i;
        }
    }

    return min;
}

void PrintArray(int* array)
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "arr[" << i << "]: " << array[i] << "\n";
    }
}

static void SwapArray(int* array, int SrcIndex, int DstIndex)
{
    // variables
    int SrcTemp = 0;
    int DstTemp = 0;
    // Buffering
    SrcTemp = array[SrcIndex];
    DstTemp = array[DstIndex];
    // Swap
    array[DstIndex] = SrcTemp;
    array[SrcIndex] = DstTemp;

}

void SelectionSort(int* array, int arraySize)
{
    int SortedRangeEnd = 0;
    while (SortedRangeEnd < arraySize)
    {
        int nextIndex = FindIndexMinInArray(array, SortedRangeEnd,10); // Шукаю індекс найменшого елемента у масиві.
        SwapArray(array, SortedRangeEnd, nextIndex);                   // Міняю його місцем з останнім не відсортованим елементом.
        SortedRangeEnd++;                                              // Звужую межу пошуку  найменшого елементу.
    }

}