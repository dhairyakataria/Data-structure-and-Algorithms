
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
        
        if (arr[mid] == x) 
            return mid; 
  
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return -1; 
} 
  


int main()
{
    int n, i, m, k, result;
    scanf("%d", &n);
    int arr[n];
    for( i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &k);
        result = binarySearch(arr, 0, n - 1, k);
        printf("%d ", result);
    }
    return 0;
}
