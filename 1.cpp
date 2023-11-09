#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Masukkan jumlah data: ";
    cin >> N;
    if(N>=1&&N<=1000){
        int data[N];
        cout << "Masukkan " << N << " angka: ";
        for(int i=0;i<N;i++){
            do {
                cin >> data[i];
                if(data[i] > 1000) {
                    return 0;
                }
            }
            while(data[i] > 1000);
        }
        int dataSize=sizeof(data)/sizeof(data[0]), temp;
        for(int i=0;i<dataSize-1;i++){
            for(int j=0;j<dataSize-1;j++){
                if((data[j] > data[j+1])){
                    temp = data[j];
                    data[j] = data[j+1];
                    data[j+1] = temp;
                }
            }
        }
        for(int i=0;i<N;i++){
            cout << data[i] << " ";
        }
    }
    else {
        return 0;
    }
return 0;
}

