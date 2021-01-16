#include <stdio.h>
void Quicksort(int[],int,int);
int partition(int[],int,int);
int main()
{
    int A[50],n,i;
    printf("Enter the number of Element :");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);  
    Quicksort(A,0,n-1);
    printf("\nArray after sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);   
    return 0;        
} 
void Quicksort(int A[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(A,l,u);
        Quicksort(A,l,j-1);
        Quicksort(A,j+1,u);
    }
}
 
int partition(int A[],int l,int u)
{
    int v,i,j,temp;
    v=A[l];
    i=l;
    j=u+1;   
    do
    {
        do
            i++;
            
        while(A[i]<v&&i<=u);
        
        do
            j--;
        while(v<A[j]);  
        
        if(i<j)
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }while(i<j);
    
    A[l]=A[j];
    A[j]=v;
    return(j);
}
