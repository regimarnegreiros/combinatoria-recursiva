#include <stdio.h>

int combinacao(int n, int p) {
	if (p > n) return 0;
    if (p == 0 || p == n) return 1;
    if (p == 1 || p == n-1) return n;
	return combinacao(n - 1, p - 1) + combinacao(n - 1, p);
}

int main() {
    int qlinhas = 10;
    int qcolinicial = 1;

    for (int i = 0; i < qlinhas; i++) {
        for(int j = 0; j < qcolinicial; j++) {
            printf("%3d ", combinacao(i, j));
        }
        qcolinicial++;
        printf("\n");
    }
    return 0;
}