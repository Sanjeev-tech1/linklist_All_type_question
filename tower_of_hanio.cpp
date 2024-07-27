#include<iostream>
using namespace std;

void hanoi(int n, char initial,char final,char temp){
   
    if(n==1){
        cout<<"move disk 1 from peg"<<initial <<"to"<<final<<endl;
        return;
    }
    hanoi(n-1,initial,temp,final);
    cout<<"move disk "<<n<<" from peg "<<initial<<" to "<<final<<endl;
    hanoi(n-1,temp,final,initial);
}
int main()
{
    int n;
    cout<<"Enter no of disk to be moved :";
    cin>>n;
    hanoi(n,'A','B','C');
    
}