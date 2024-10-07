#include<stdio.h>
#include<stdlib.h>

struct grp{
    int total_size;
    int used_size;
    int* ptr;
};

void createGrp(struct grp*a , int tsize ,int usize){
    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int*)malloc(tsize * sizeof(int));

     a->total_size = tsize;
     a->used_size = usize;
     a->ptr = (int*) malloc(tsize * sizeof(int));
}

void showGrp(struct grp*a){
    for (int i = 0; i <= a->used_size; i++)
    {
        printf("%d\t",a->ptr[i]);
    }
}

void setGrp(struct grp *a){
    int n;
    for (int i = 0; i <= (a->used_size); i++)
    {
        printf("Enter %d element :\n",i);
        scanf("%d",&n);
        // printf("\n");
        (*a).ptr[i] = n;
    }
}

int main(){
    struct grp marks;
    printf("Creating a group :\n");
    createGrp(&marks,20,5);
    printf("Setting the values for group :\n");
    setGrp(&marks);
    printf("Showing the values of group :\n");
    showGrp(&marks);

    return 0;
}