
#include<stdio.h>
void insertionSort(int Arr[],int n){
    for(int i=1; i<n; i++){
        int j = i-1;
        while(Arr[j+1]<Arr[j] && j>=0){
            int temp = Arr[j];
            Arr[j] = Arr[j+1];
            Arr[j+1] = temp;
            j--;
        }
    }
}
void printArray(int Array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d\t",Array[i]);
    }
}
int main(){
    int Array[5] = {15,51,54,23,32};
    int size = sizeof(Array)/sizeof(int);
    printf("Array before sorting\n");
    printArray(Array,size);
    printf("\nArray after sorting\n");
    insertionSort(Array,size);
    printArray(Array,size);
    return 0;
}
































// #include<stdio.h>
// #include<stdlib.h>

// struct grp{
//     int total_size;
//     int used_size;
//     int* ptr;
// };
// void createGrp(struct grp * a,int tsize, int usize){
//     a->total_size = tsize;
//     a->used_size =usize;
//     a->ptr = (int*)calloc(10,sizeof(int));
// }
// void showGrp(struct grp * a){
//     for(int i=0;i<=a->used_size;i++){
//         printf("%d\t",(*a).ptr[i]);
//     }
// }
// void setGrp(struct grp *a){
//     for (int i = 0; i <=(*a).used_size; i++)
//     {
//         printf("Enter the %d element for your grp :\n",i);
//         scanf("%d",(*a).ptr[i]);
//         printf("\n");
//     }

// }

// int main(){
//     struct grp class;
//     printf("A new Group is created.\n");
//     createGrp(&class,10,5);
//     printf("Showing your New group :\n");
//     printf("Showing your New group :\n");
//     showGrp(&class);

//     return 0;
// }
