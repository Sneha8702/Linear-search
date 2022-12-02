# include<stdio.h>
int main()
{
    int a[100],i,n,x,flag=0;
    printf("enter the array size:");
    scanf("%d",&n);
    printf("enter the elements in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
    	if(a[i]==x)
        {
        	flag=1;
       	 break;
         }
    }
        if (flag==1)
        printf("element found \n");
        else
        printf("element not found\n");
        return 0;
}
