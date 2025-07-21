// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
    cin >> N;
    int cows[N];
    for (int i = 0; i<N; ++i){
        cin >> cows[i];
    }
    sort(cows, cows+N);

    long long besttotal = 0;
    int besttuition = 0;

    for (int i = 0; i<N; ++i){
        int tuition = cows[i];
        long long total = (N-i)*tuition;
        if (total > besttotal) {
            besttotal = total;
            besttuition = tuition;
        }
    }
    cout << besttotal << " " << besttuition;

}
