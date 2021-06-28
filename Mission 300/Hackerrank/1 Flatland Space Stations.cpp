// #include<stdio.h>
// int main()
// {
//     long int n,m,i,j,p=0,q=0,k,x;
//     scanf("%ld %ld",&n,&m);
//     long a[n],l[n],r[n];
//     for(i=0;i<n;i++)
//     {
//         a[i] = -1;
//         r[i] = 0;
//         l[i] = 0;
//     }
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%ld",&x);
//         a[x] = x;
//     }
//     for ( i = 0; i <n; i++)
//     {
//         p=0;
//         q=0;
//         for ( j=k,k=i;j<n || k>=0;j++,k--)
//         {
//             if(j<n)
//             {
//                 if(a[j]==-1)
//                 p++;
//                 else{
//                     r[i]=p;
//                     break;
//                 }
//             }
//             if(k>=0)
//             {
//                 if(a[k]==-1)
//                 q++;
//                 else{
//                     l[i] = q;
//                     break;
//                 }
//             }
//         }
        
//     }
//     long int max1=r[0];
//     long int max2=l[0];
//     for ( i = 0; i < n; i++)
//     {
//         if(r[i]>max1)
//         max1 = r[i];
//         if(l[i]>max2)
//         max2=l[i];
//     }
//     if(max1>max2)
//     printf("%ld",max1);
//     else{
//         printf("%ld",max2);
//     }
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n , m , maxi = 0;
    cin>> n >> m;
    vector<int> station(m);
    for(int i=0 ; i<m ; i++) cin >> station[i];
    sort(station.begin(), station.end());
    for(int i=0 ; i<=station[0] ; i++) maxi = max(maxi, station[0]-i);
    for(int i=0 ; i<m-1 ; i++){
        for(int j = station[i] ; j<=station[i+1] ; j++) {
            maxi = max(maxi, min(j-station[i], station[i+1]-j));
        }
    }
    for(int i=station[m-1] ; i<n ; i++) maxi = max(maxi, i-station[m-1]);
    cout << maxi << endl;
    return 0;
}
