/**
 * reverse_array - function that reverse content of array
 *@a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n).
{
int i;
int t;

for (i = 0; i < n / 2; i++)
{
t = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = t;
}
}
