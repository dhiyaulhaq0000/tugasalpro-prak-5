/*File      : no3.c*/
/*Deskripsi : penjumlahan sub array/tabel */
/*Dibuat    : Dhiya Ulhaq (24060121140134)*/
/*Tanggal   : 1 april 2022*/

#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
long int subArraySum(int arr[], int n)
{
    long int result = 0;
    int i =0,j=0, k= 0;
    for (i=0; i <n; i++)
    {
        for (j=i; j<n; j++)
        {
            for (k = i ; k <= j ; k++)
            {
                result += arr[k];
            }
        }
    }
    return result ;
}
int main()
{
    int arr[] = { 1,3,6};
    int n = ARRAY_SIZE(arr);
    long int sum  = subArraySum(arr, n) ;
    printf("maka penjumlahan sub array/tabel adalah = %d\n",sum);
    return 0;
}
