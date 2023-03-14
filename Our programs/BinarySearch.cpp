#include<iostream.h>
#include<conio.h>
int main ()
{
    int a[5] , size,num,mid;
    int beg=0 , end=size-1;

    cout<<"Enter the size of an array :";
    cin>>size;

    for (int i=0; i<=size; i++)
    {
        cin>>a[i]; 
    }   
    {
        mid = (beg + end )/2;
        if (a[mid]==num)
        {return mid+1; }

        else if (a[mid]<num)
        {
            beg=mid+1;
        }
        elseif(a[mid]>num)
        {end = mid-1;}

    }
    getch();
}