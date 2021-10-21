#include <stdio.h>

int main() {
    int ar[9]={88, 112, 6467, 325, 878, 3, 77, 8, 99};
    for(int i = 0; i<9; i++) {
        printf("%d ", ar[i]);
    }

    int arr1[2][2] = {
            {1,1},
            {1,4}
    };

    int arr2[2][2] = {
            {1,2},
            {4,1}
    };

    int arr3[2][2] = {
            {0,0},
            {0,0}
    };

//    int m = 0;
//    int q = 0;
//    int n = 0;

//    int m = 0,q,n;

    int m = 3;
    int q = 3;
    int n = 3;

    for (int i = 0; i < m; i++)
        for(int j = 0; j < q; j++)
        {
            arr3[i][j] = 0;
            for(int k = 0; k < n; k++)
                arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
//    for(int p = 0; p<1; p++) {
//        printf(" %d\n", arr3[p]);
//    }
//    printf("\n%d", arr3);
    for(int l = 0; l<4; l++) {
        printf("\n%d ", arr3[l]);
    }


    return 0;
}
