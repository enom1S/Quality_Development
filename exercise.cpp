/*
- fix warning and errors
- fix the code
- make N dynamic, let the user choose N
- remove unused
- make some improvements on your own
*/

#include <iostream>

using namespace std;

int inserisciDimensione(int dim){
    cin>>dim;
    return dim;
}

void inserisciElementi(int *a, int dim){
    int x;
    for(int i=0; i<dim; i++){
        cin>>x;
        a[i]=x;
    }
}

 void swap(int &a, int &b){
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}

void bubbleSort(int *a, int dim){
    for(int i=0; i<dim-1; i++){
        for(int j=0; j<dim-i-1; j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}

void visualizzaArray(int *a, int dim){
    for(int i=0; i<dim; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    cout<<"Inserisci dimensione: ";
    int dim=inserisciDimensione(dim);
    int *a=new int [dim];
    cout<<"Inserisci gli elementi: ";
    inserisciElementi(a,dim);
    visualizzaArray(a, dim);
    cout<<"\n";
    bubbleSort(a, dim);
    cout<<"\n";
    visualizzaArray(a, dim);
    return 0;
}
