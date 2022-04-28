#include <iostream>
using namespace std;
void Heap(int arr1[], int x, int z)
{
	int largest_element = z;
	int j = 2 * z + 1;
	int k = 2 * z + 2;
	if (j < x && arr1[j] > arr1[largest_element])
		largest_element = j;
	if (k < x && arr1[k] > arr1[largest_element])
		largest_element = k;
	if (largest_element != z) {
		swap(arr1[z], arr1[largest_element]);
		Heap(arr1, x, largest_element);
	}
}
void heap_sort_function(int arr1[], int total_size_of_arr1)
{

	for (int x = total_size_of_arr1 / 2 - 1; x >= 0; x--)
		Heap(arr1, total_size_of_arr1, x);

	for (int x = total_size_of_arr1 - 1; x >= 0; x--)
        {
            swap(arr1[0], arr1[x]);
            Heap(arr1, x, 0);
        }
}
int main()
{
	int arr1[] = { 12, 11, 13, 5, 6, 7 };
	int total_size_of_arr1 = (sizeof(arr1)/sizeof(arr1[0]));
	heap_sort_function(arr1,total_size_of_arr1);
	for(int i=0;i<total_size_of_arr1;i++)
    {
        cout<<arr1[i]<<" ";
    }
	return 0;
}

