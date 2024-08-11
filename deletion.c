#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the array elements");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter the array a position %d",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("before updating\n");
    
    for (int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    int pos;
    printf("enter the position of element to where you want to delete\n");
    scanf("%d",&pos);
    
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    

    printf("after updating\n");
    for (int i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
return 0;
}
#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the array elements");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter the array a position %d",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("before updating\n");
    
    for (int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    int pos;
    printf("enter the position of element to where you want to delete\n");
    scanf("%d",&pos);
    
    for(int i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    

    printf("after updating\n");
    for (int i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
return 0;
}
