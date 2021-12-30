#include<iostream>
using namespace std;

void createHashTable(int *arr, int size)
{
    int hashTable[13] = {0};
    for (int i = 0; i < size; i++)
    {
        int key = arr[i] % 13;
        hashTable[key] = arr[i];
    }
    cout << "The hash table with collision issue is: " << endl;
    for (int i = 0; i < 13; i++)
    {
        cout << hashTable[i] << " ";
    }
    cout << endl;
}

void resolveCollision(int *arr, int size)
{
    int hashTable[13] = {0};
    for (int i = 0; i < size; i++)
    {
        int key = arr[i] % 13;
        if (hashTable[key] == 0)
        {
            hashTable[key] = arr[i];
        }
        else
        {
            int j = 1;
            while (hashTable[(key + j) % 13] != 0)
            {
                j++;
            }
            hashTable[(key + j) % 13] = arr[i];
        }
    }
    cout << "The hash table with no collision is: " << endl;
    for (int i = 0; i < 13; i++)
    {
        cout << hashTable[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[8] = {18, 41, 22, 44, 59, 32, 31, 73};
    createHashTable(arr, 8);
    resolveCollision(arr, 8);
    return 0;
}