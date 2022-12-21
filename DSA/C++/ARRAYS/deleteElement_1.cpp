#include <iostream>
using namespace std;

void deleteEle(int a[], int x){
int idx=0;
int l = 6;   //sizeof(a)/sizeof(a[0]);
for(int i=0;i<l;i++){
    if(a[i]==x){
        idx=i;
       // l=l-1;
    }
}
for(int j=idx+1;j<l;j++){
    a[j-1]=a[j];
}
l=l-1;

for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    int arr[6] = {1,2,3,4,5,6};
    int k=3;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    deleteEle(arr,k);
    
return 0;

}
