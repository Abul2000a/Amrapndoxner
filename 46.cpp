#include <iostream>

void print_array(int arr[], int size)
{
	static int i;
	if (i == size) {
		i = 0;
		std::cout << std::endl;
		return;
	}

	// print the ith element
	std::cout << arr[i] << " ";
	i++;

	print_array(arr, size);
}

// Driver code
int main()
{

	int arr[] = { 3, 5, 6, 8, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);

	return 0;
}
