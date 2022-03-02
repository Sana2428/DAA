#include<stdio.h>
#define max 50
int binarysearch(int array[],int,int ,int key);
int main()
{
   int counter=0;
   int arr[max];
   int n=0,i=0;
   int index=0;
   int l=0,r=0,key=0;
   printf("Enter the total number of element u want in an array\n");
   scanf("%d",&n);
    printf("Enter the numbers \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("PRinting the array \n");
     for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the element u want to search in array\n");
    scanf("%d",&key);
    index=binarysearch(arr,0,n-1,key);
    printf("Therefore the position  is %d\n",(index+1));
}
int binarysearch(int array[],int l,int r,int key)
{
    int count=0;
    int flag =0;
    int mid=0;
    while(l<=r)
     {
         mid=(l+r)/2;
         if(array[mid]==key)
         {

                  count++;
                   flag=1;
                printf("Counter =%d\n",count);
                  return mid;
            }
        else if (key<array[mid])
         {
             r=mid-1;
         }
        else if(key>array[mid])
         {
             l=mid+1;
         }
     }

if(flag==0)
     {
         printf("Key not found in the array \n");
     }


}
