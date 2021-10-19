#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void merge(int* A, int ALen, int m, int* B, int BLen, int n) {
    // write code here
    int* tmp = (int*)malloc(sizeof(int) * (m + n));
    int i1 = 0, i2 = 0;
    int i = 0;
    while (i1 < m && i2 < n)
    {
        if (A[i1] < B[i2])
            tmp[i++] = A[i1++];
        else
            tmp[i++] = B[i2++];
    }
    while (i1 < m)
        tmp[i++] = A[i1++];
    while (i2 < n)
        tmp[i++] = B[i2++];
    memcpy(A, tmp, sizeof(int) * (m + n));
    free(tmp);
}
int main()
{
    int* A[] = {3,6,1,8,3};
    int* B[] = { 35,1,25,8,3,99};
    //merge(A,5,5,B,6,6);
    int i = 0;
    
    return 0;
}