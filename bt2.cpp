/*Có N hồ nước, hồ thứ i có lượng nước ban đầu là a[i] và mỗi ngày lượng nước bốc hơi là b[i]. Hãy xác định tổng lượng nước của các hồ ở từng ngày trong t ngày (ngày 0, ngày 1, ngày 2,......., ngày t).
testcase:
input:                      
10 5
17 3
22 5
19 5
17 5
13 4
20 2
14 2
27 1
29 2
12 3        
output:
190
158
126
94
69
57          */
#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    int N, t, sum = 0;
    cin >> N >> t;
    ll a[N], b[N];

    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
        sum += a[i];
    }

    cout << sum << endl;

    for (int j = 0; j < t; j++) {
        int i = 0;
        while (i < N) {
            if (a[i] >= b[i]) {
                sum -= b[i];
                a[i] -= b[i];
            } else {
                sum -= a[i];
                a[i] = 0;
            }
            i++;
        }
        cout << sum << endl;
    }

    return 0;
}
