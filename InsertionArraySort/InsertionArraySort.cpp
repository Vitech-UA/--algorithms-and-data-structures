// InsertionArraySort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void PrintArray(int* array);
void InsertionSort(int* array, int arraySize);
static void SwapArray(int* array, int SrcIndex, int DstIndex);

int main()
{
    int massiv[10] = { 11,55,33,22,66,88,99,77,44,0};

    std::cout << "Array Len: " << sizeof(massiv) << "\n";

    PrintArray(massiv);
   
    std::cout << "------1------\n";
    
    InsertionSort(massiv, 9);
    PrintArray(massiv); 
}

void PrintArray(int* array)
{
    for (int i = 0; i < 10; i++)
    {
        std::cout <<"arr["<<i<<"]: "<< array[i] <<"\n";
    }
}

void InsertionSort(int* array, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        for(int j = 0; j<arraySize; j++)
        { 
            if(array[j] > array[j + 1])
            {
                SwapArray(array, j, j+1);
            }
        }
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