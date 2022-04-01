/*File      : no2.c*/
/*Deskripsi : selisih terbesar dalam array */
/*Dibuat    : Dhiya Ulhaq (24060121140134)*/
/*Tanggal   : 1 april 2022*/

#include <stdio.h>
int maxDiff(int arr[], int n){
   int MD = arr[1] - arr[0];
   int min = arr[0];
   for(int i = 1; i < n; i++){
      if (arr[i] - min > MD)
         MD = arr[i] - min;
      if (arr[i] < min)
         min = arr[i];
   }
   return MD;
}
int main(){
   int arr[] = {3,1,1,1,6,9,2};
   int n=7;
   printf("selisih terbesarnya adalah : %d ",maxDiff(arr, n));
   return 0;
}
