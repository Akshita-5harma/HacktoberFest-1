#include<iostream>
using namespace std;

void printArray(int a[], int N)
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

void MergedArray(int a[], int b[], int N, int M)
{
    int c[N+M];
    int i = 0, j = 0, k = 0; 
    while(i < N && j < M)
    {
        if(a[i] <= b[j])
        {
            c[k++] = a[i++];
        }

        else if(a[i] > b[j])
        {
            c[k++] = b[j++];
        }
    }
    while(i < N)
        c[k++] = a[i++];
    while(j < M)
        c[k++] = b[j++];

    printArray(c, N+M);
}

int main()
{
    int N, M;
    cin >> N >> M;

    int a[N], b[M];

    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < M; i++)
    {
        cin >> b[i];
    }

    MergedArray(a, b, N, M);
    return 0;
} 