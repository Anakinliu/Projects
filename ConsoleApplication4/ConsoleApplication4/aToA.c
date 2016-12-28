
void aToA(char arr[],int n)
{
	int i = 0;
	for (; i < n - 1; i++)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
			arr[i] = arr[i] - 32;
	}
}