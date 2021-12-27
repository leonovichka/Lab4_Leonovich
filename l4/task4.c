//Сортировка выбором
void sort(int *arr, int n)
{
    int minPosition, tmp;
    for (int i = 0; i < n; i++)
    {
        minPosition = i;
        for (int j = i + 1; j < n; j++)
            if (arr[minPosition] > arr[j])
                minPosition = j;
        tmp = arr[minPosition];
        arr[minPosition] = arr[i];
        arr[i] = tmp;
    }
}


