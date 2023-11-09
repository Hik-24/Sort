#include <iostream>
using namespace std;
int main() {
    int N, L, R;
    cin >> N >> L >> R;
    if((N>=1&&N<=1000) && (L>=0&&L<=R) && (R<=N-1)){
        int data[N];
        for(int i=0;i<N;i++){
            do {
                cin >> data[i];
                if(data[i] > 1000) {
                    return 0;
                }
            }
            while(data[i] > 1000);
        }
        int dataSize = sizeof(data)/sizeof(data[0]), temp;
        for(int i=L;i<R;i++){
            for(int j=L;j<R;j++){
                if(data[j] > data[j + 1]){
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
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
