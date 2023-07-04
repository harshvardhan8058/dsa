#include <stdio.h>  
  void heapify_20(int a[], int n, int i)  
{  
    int largest = i;
    int left = 2 * i + 1; 
    int right = 2 * i + 2; 

    if (left < n && a[left] > a[largest])  
        largest = left;  
     
    if (right < n && a[right] > a[largest])  
        largest = right;  
    if (largest != i) {   
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify_20(a, n, largest);  
    }  
}  

void heaper(int a[], int n)  
{  
    for (int i = n / 2 - 1; i >= 0; i--)  
        heapify_20(a, n, i);  
    for (int i = n - 1; i >= 0; i--) {  
       
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify_20(a, i, 0);  
    }  
}
void printArr(int arr[], int n)  
{  
    for (int i = 0; i < n; ++i)  
    {  
        printf("%d", arr[i]);  
        printf(" ");  
    }  
          
}  
int main()  
{  
    int a[] = {32, 43, 3, 53, 23, 64, 9};  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting - \n");  
    printArr(a, n);  
    heaper(a, n);  
    printf("\nAfter sorting  - \n");    
    printArr(a, n);  
    return 0;  
}  