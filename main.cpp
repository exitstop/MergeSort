#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

void Merge(int *A, unsigned int p,  unsigned int q,std::size_t r){

    r--;    
    if( p != r) {        

    for(unsigned int i = p; i < q; i++){
        for(unsigned int ii = r; ii > r-q; ii--){
            if(A[i] > A[ii]){
                int tmp = A[i];
                A[i] = A[ii];
                A[ii] = tmp;
            }
        }
    }
    
    }else if(q <= r){

    }

}
void Sort(int *A, unsigned int p, std::size_t r){
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
    cout << endl;

    Sort(A, 1, sizeof(A)/sizeof(int));  // START Sort


    cout << "end:   ";
    for(unsigned int i = 0; i < sizeof(A)/sizeof(int) ; i++){
        cout << A[i];
    }
    cout << endl;

    return 0;
}