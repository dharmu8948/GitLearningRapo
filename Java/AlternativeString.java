import java.io.*;
import java.util.Arrays;
class AlternativeString
{
static void alternateSort(int arr[] , int n)
{
	int i,j;
Arrays.sort(arr);
for(i=0;i<n;i++)
{
for(j=n-1;j>=i+1;j--)
{
while(i<j)
{
System.out.print(arr[j--] + " ");
System.out.print(arr[i++] + " ");
}
if(i%2!=0)
System.out.println(arr[i]);
}
}
}
public static void main(String[] args)
{
int arr[] = {1,12,4,6,7,10};
int n=arr.length;
alternateSort(arr ,n);
}
}