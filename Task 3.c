#include <stdio. h>
int main () {
int secret =999;
int arr[3]={1,2,3};
int index;
printf ("enter index:");
scanf("%d", &index);
int *ptr=arr;
printf ("value at index: %d\n", *(ptr+index));
return 0;
}
