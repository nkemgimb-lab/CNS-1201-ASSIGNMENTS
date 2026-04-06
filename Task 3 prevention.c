#include<stdio. h>
int main () {
int arr [3]={1,2,3};
int index;
printf ("enter index (0-3):");
scanf ("%d", &index);
if(index<0 || index >=3){
printf ("error: invalid index! \n");
return 1;
}
int*ptr =arr;
printf ("value at index: %d\n", *(ptr+index));
return 0 ;
} 
