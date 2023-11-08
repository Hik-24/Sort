#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    
    int data[n];
    cout << "Masukkan " << n << " angka: ";
    for (int i=0;i<n;i++){
        cin >> data[i];
    }
    int dataSize=sizeof(data)/sizeof(data[0]), temp;
    for(int i=0;i<dataSize-1;i++){
        for(int j=0;j<dataSize-1;j++){
            if(data[j]>data[j+1]){
                temp=data[j] ;
                data[j]=data[j+1];
                data[j+1]=temp;
             }
         }
     }
     for(int i=0;i<dataSize;i++){
         cout<<data[i]<<" ";
     }
    return 0;
}
