#include<stdio.h>
int main(){
    int size;  
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr [size];
    printf("Enter array value :");
    for(int i=0; i<size; i++)
    scanf("%d", &arr[i]);
    printf("sorting this Array using insertion sort");
    for(int i=1; i<size; i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0&&key<arr[j])
    {
        arr[j+1]=arr[j];
        j--;
    }
   arr[j+1]=key;
}
printf("After insertion sort: sorted Array");
         for(int i=0; i<size; i++)
         printf("%d ",arr[i]);
         return 0;
}
