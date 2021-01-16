   #include<stdio.h>
   int main(){
    int t,n,x,y,i,j,a,d;
    scanf("%d",&t);
    while(t)
    { a=0;
    d=0;
    x=0;
    y=0;
       scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",arr+i);

        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i]<arr[i+1])
            {
                y=i;
                a++;
            }
            else if(arr[i]>arr[i+1])
            {
                x=i;
                d++;
            }
        }
        if(a==n-1)
            printf("%d 1\n",arr[n-1]);
        else if(d==n-1)
            printf("%d 2\n",arr[0]);
        else if(a>d)
        {
             printf("%d 4\n",arr[x]);
        }
        else if(a<d)
        {
             printf("%d 3\n",arr[y+1]);
        }
        t--;
    }return 0;
}

