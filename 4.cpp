#include <iostream>
using namespace std;
int main(){
  int n,p;
  cin >> n >> p;
  int tinggi[n];
  for (int i=0;i<n;i++){
    cin >> tinggi[i];
  }
  
  for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;++j){
            if (tinggi[j] < tinggi[j+1]){
                int temp = tinggi[j];
                tinggi[j] = tinggi[j+1];
                tinggi[j+1] = temp;
            }
        }
  }
  int minTinggi = 0;
    int tinggiSekarang = 0;
    for (int i = 0; i < n; ++i) {
        tinggiSekarang += tinggi[i];
        minTinggi++;
        if (tinggiSekarang >= p) {
             break;
            }
        }
    cout << minTinggi << endl;
  return 0;
}
