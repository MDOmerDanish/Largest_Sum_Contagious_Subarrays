#include<stdio.h>


void main()
{
    int n;
    printf("enter the size of array :\n");
    scanf("%d",&n);
    int arr[n],i,present_sum,highest_sum;


    printf("enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    highest_sum=func(arr,n);

    printf("\n highest sum is %d\n\n",highest_sum);
}

int func(int arr[],int n)

{

      int highest_sum,i;
     int f_index=0,l_index=0,neg=1;
     int present_sum=highest_sum=0;

   for(i=0;i<n;i++)
   {
         if(arr[i]>=0)
         {
             neg=0;
             break;
         }
    }
     if(neg==1)
     {
         highest_sum=arr[0];
         for(i=1;i<n;i++)
            if(arr[i]>highest_sum)
             {
                  highest_sum=arr[i];
                  f_index=i;
                  l_index=i;
              }



     }

          else
       {

    for (i=0;i<n;i++)
      {
        present_sum+=arr[i];

        if(present_sum<0)
        {
            present_sum=0;f_index=i+1;
        }


        else
          {

            if(highest_sum<present_sum)

             {
                highest_sum=present_sum; l_index=i;
             }
           }
        }
     }



        printf("first  index  is   %d\n\n",f_index);
        printf("last   index  is   %d\n\n",l_index);

           return highest_sum;

}





