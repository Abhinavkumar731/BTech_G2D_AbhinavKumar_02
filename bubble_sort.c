#include<stdio.h>

// 1. Move function outside main
void Bubble_sort(int n, int a[]){
    int i, j, temp;
    for (i = 0; i < n-1; i++) // 2. Outer loop runs n-1 times
    {
        // 3. Inner loop corrected to avoid out of bounds (n-i-1)
        for(j=0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // 4. Call the function
    Bubble_sort(n, arr);
    
    // Print sorted array
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    
    return 0;
}
