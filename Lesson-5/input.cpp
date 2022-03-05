int input(int *arr)
{
	int size = 0;

	while (cin >> arr[size])
		size++;

	return size;
}