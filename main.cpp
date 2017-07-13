#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void Merge(int *A, unsigned int p,  unsigned int q, unsigned int r){

    int lo = ceil((r-p)/2);
    if(lo == 0) { lo =1; p--;}

        for(unsigned int i = p; i < p + lo; i++){
            for(unsigned int ii = r-1; ii >= p + lo; ii--){
                if(A[i] > A[ii]){
                    int tmp = A[i];
                    A[i] = A[ii];
                    A[ii] = tmp;
                }
            }
    }  


}
void Sort(int *A, unsigned int p, unsigned int r){
   if(p < r){
        unsigned int q = ceil((p+r)/2);

        Sort(A, p, q);
        Sort(A, q+1, r);         
        
        Merge(A, p, q, r);
   } 
}



int main(int argc, char *argv[]){

    int A[] = {5,2,4,6,1,3,2,6};
    cout << "start: ";
    for(unsigned int i = 0; i < sizeof(A)/sizeof(int) ; i++){
        cout << A[i];
    }
    cout  <<endl;

    Sort(A, 1, sizeof(A)/sizeof(int));  // START Sort

    cout << "end:   ";
    for(unsigned int i = 0; i < sizeof(A)/sizeof(int) ; i++){
        cout << A[i];
    }
    cout << endl;

    return 0;
}