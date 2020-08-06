#include <stdio.h>

int main(void)
{
	int arr[] = {2, 8, 4, 1},
			n = sizeof(arr) / sizeof(arr[0]),
			x;

	if (n <= 1)
	{
		return 0;
	}

	for (int i = 1; i < n; i++)
	{
		x = arr[i];
		for (int j = i; j > 0 && arr[j] < arr[j-1]; j--)
		{
            int y = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = y;
		}
	}

	for (int q = 0; q < n; q++)
	{
		printf("%d ", arr[q]);
	}
	printf("\n");

	return 0;
}
