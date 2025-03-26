#include <iostream>
using namespace std;

int main() {
    int N, i, j, t;
    bool scambio;
    cout<<"Quanti numeri vuoi ordinare?"<<endl;
    cin>>N;
    int num[N];
    i=0;
    scambio=true;
    while(i<N)
    {
        num[i]=random()%10*N;
        i=i+1;
    }
    i=0;
    while(i<=N-1 and scambio)
    {
        scambio=false;
        j=0;
        while(j<=(N-2)-i)
        {
            if(num[j]>num[j+1])
            {
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"Il "<<i+1<<"° numero è "<<num[i]<<endl;
        i=i+1;
    }
    i=0;
    j=0;
    while(i<N)
    {
        if(num[i]%2==0)
        {
            cout<<"Il "<<j+1<<"° numero pari è "<<num[i]<<endl;
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    j=0;
    while(i<N)
    {
        if(num[i]%2!=0)
        {
            cout<<"Il "<<j+1<<"° numero dispari è "<<num[i]<<endl;
            j=j+1;
        }
        i=i+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
