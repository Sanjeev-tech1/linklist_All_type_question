#include<iostream>
#include<conio.h>
using namespace std;

int binarySearch(int a[],int n, int x){
    int left=0;
    int right =n-1;
    while(left<right)
    {
        int middle=(left+right)/2;
        if(x==a[middle])
        return middle;

        if(x>a[middle])
        left=middle+1;

        else
        right=middle-1;
    }
    return -1;
}
int main(){
    int a[10]={2,5,9,11,17,19,46,80,95,100};

    int s;
    cout<<"Enter the element to search :";
    cin>>s;
    int f=binarySearch(a,10,s);
    if(f==-1)
    cout<<"element not element";
    else
    cout<<"elememnt found at index :"<<f;
}