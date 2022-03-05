void swap(int &f, int &s)
{
	int temp = f;
	f = s;
	s = temp;
}

void reverse(int *arr, int size)
{
	for (int i = 0; i < size / 2; i++)
		swap(arr[i], arr[size - 1 - i]);
}