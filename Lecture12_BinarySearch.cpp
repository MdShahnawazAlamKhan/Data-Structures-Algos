#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s + (e-s)/2;
    while(s<=e){
        if(key<arr[mid]) e=mid-1;
        else if(key>arr[mid]) s=mid+1;
        else return mid;
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index=binarySearch(even,6,2);
    cout<<"Index of 12 is: "<<index<<endl;
 return 0;
}
