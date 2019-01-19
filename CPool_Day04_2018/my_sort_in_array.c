/*
** EPITECH PROJECT, 2018
** my_sort_in_array
** File description:
** Change in ascend order
*/

void next_sort(int c, int *min, int *minid, int i)
{
    if (c < *min && c != -2147483648) {
        *min = c;
        *minid = i;
    }
}

void my_sort_in_array(int *array, int size)
{
    int min = 2147483647;
    int minid = 0;
    int made = 0;
    int array2[size];

    for (made = 0; made < size; made++) {
        min = 2147483647;
        for (int i = 0; i < size; i++) {
            next_sort(array[i], &min, &minid, i);
        }
        array2[made] = min;
        array[minid] = -2147483648;
    }
    for (made = 0; made < size; made++) {
     	array[made] = array2[made];
    }
}