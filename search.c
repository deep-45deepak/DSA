
#include<stdio.h>
int binarySearch(int arr[], int size, int value){
    int beg = 0;
    int end = size-1;
    while(beg <= end){
        int mid = (beg+end)/2;
        if(arr[mid]==value){
            return mid+1;
        }
        else if(arr[mid]<value){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int Array[6] = {12,13,14,15,16,17};
    int size = sizeof(Array)/sizeof(int);
    int value;
    printf("Enter the element to search :\n");
    scanf("%d",&value);
    int Ans = binarySearch(Array,size,value);
    printf("%d",Ans);

    return 0;
}