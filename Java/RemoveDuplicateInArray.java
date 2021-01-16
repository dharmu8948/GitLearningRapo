// this is only for sorted array

import java.util.*;
class RemoveDuplicateInArray
{
	public static int removeDuplicate(int arr[],int n)
	{
		if(n==0||n==1)
			return n;
		int[] temp = new int[n];
		int j=0;
		for(int i=0;i<n-1;i++)
			if(arr[i]!=arr[i+1])
				temp[j++]=arr[i];
			temp[j++]=arr[n-1];
//changing in original array
        for(int i=0;i<j;i++)
        {
	       arr[i]=temp[i];
        }
        return j;
}
public static void main(String[] args)
{
	int arr[]={10,20,20,30,30,40,50,50,60,60,60,60,70};
	int len = arr.length;
	len = removeDuplicate(arr,len);
	for(int i=0;i<len;i++)
		System.out.print(arr[i]+" ");
}
}