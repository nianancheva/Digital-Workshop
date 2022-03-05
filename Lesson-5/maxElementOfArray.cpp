int max_element(const int *arr, int size)
{
	int max = INT_MIN;

	for (int i = 0; i < size; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}