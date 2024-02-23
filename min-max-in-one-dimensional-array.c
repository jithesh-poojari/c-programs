// To find largest and smallest elements with their position in one-dimension array
#include <stdio.h>

int main()
{
  int n, arr[100], i, min, max;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  printf("Enter the array elements\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  min = max = 0;
  for (i = 1; i < n; i++)
  {
    if (arr[i] < arr[min])
    {
      min = i;
    }
    if (arr[i] > arr[max])
    {
      max = i;
    }
  }

  printf("Largest element: %d, Position: %d \n", arr[max], max + 1);
  printf("Smallest element: %d, Position: %d", arr[min], min + 1);
  return 0;
}