// bài thi c++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>

int main()
{
    int main() {
        int a[100];
        int n;
        printf("\nNhap so luong phan tu n = ");
        do {
            scanf("%d", &n);
            if (n <= 0) {
                printf("\nNhap lai n = ");
            }
        } while (n <= 0);

        for (int i = 0; i < n; i++) {
            printf("\nNhap a[%d] = ", i);
            scanf("%d", &a[i]);
        }

     
        int tg;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] > a[j]) {
                    tg = a[i];
                    a[i] = a[j];
                    a[j] = tg;
                }
            }
        }


        printf("\nMang da sap xep la: ");
        for (int i = 0; i < n; i++) {
            printf("%5d", a[i]);
        }


    }
}
	

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
