#include <iostream>
using namespace std;

// int main()
// {
   
//   int n =8;
//   int a[8] ={3,4,-2,5,8,20,-10,8};
//   for ( int i =1;i<n;i++)
//   {    int sum1 =0;
//       for ( int j =0;j<i;j++)
//       {
//           sum1+= a[j]; 
//       }
//       int sum2 =0;
//       for ( int k =i;k<n;k++)
//       {
//           sum2+= a[k];
//       }
//       cout<< sum1<<" "<<sum2;
//       if ( sum1 == sum2) 
//       {
//           cout<< "true";
//           break;
//       }
//       cout<< endl;
//   }
// // this codes takes o(n^2);
//     return 0;
// }



//Lets write an optimised code
int main()
{
    
     int n =8;
   int a[8] ={3,4,-2,5,8,20,-10,8};
   int ts =0;
   for ( int i  =0;i<n;i++)
   {
       ts+= a[i];
   }
   int ps =0;
   for ( int i =0;i<n;i++ )
   {
       ps+= a[i];
       cout<< ps <<" "<< ts-ps<< endl;
       if ( ps == ts- ps) 
       {
           
           cout<< i+1;
           break;
       }
   } 
   
    
    return 0;
}