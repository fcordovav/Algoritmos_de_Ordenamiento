#include <iostream>
#include <algorithm>

using namespace std;

void bucketSort(int L[], int n) {
    if (n <= 0) {
        return;
    }

    int max_valor = *max_element(L, L + n);
    int min_valor = *min_element(L, L + n);

    int rango_bucket = (max_valor - min_valor) / n + 1;

    int num_buckets = (max_valor - min_valor) / rango_bucket + 1;
    vector<vector<int>> buckets(num_buckets);

    for (int i = 0; i < n; i++) {
        int indice_bucket = (L[i] - min_valor) / rango_bucket;
        buckets[indice_bucket].push_back(L[i]);
    }

    int indice = 0;
    for (int i = 0; i < num_buckets; ++i) {
        if (!buckets[i].empty()) {
            sort(buckets[i].begin(), buckets[i].end());
            for (int j = 0; j < buckets[i].size(); ++j) {
                L[indice++] = buckets[i][j];
            }
        }
    }
}

