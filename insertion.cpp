#include<iostream>
using namespace std;
int insert(int arr[],int n,int x,int cap,int pos)
{
    if(n==cap)
    return n;
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[idx]=x;
    return(n+1);
}
int main(){
    int arr[100],n,x,pos,cap;
    cout<<"Enter the size of array,element to insert,positio to insert and capacity of array"<<endl;
    cin>>n>>x>>pos>>cap;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int size=insert(arr,n,x,cap,pos);
    cout<<"The final size of array is "<<size;
    return 0;
}