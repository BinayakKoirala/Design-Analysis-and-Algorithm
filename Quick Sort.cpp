#include<cpp>

int main() {
    _ arr= random(10,100);
    print("Input: ",arr);
    _ count=0;

    _ partition =[&](_&A, _ p, _ r) {
        _ x=A[r];
        _ i=p;
        for(_ j=p;j<r;++j){
            ++count;
            if(A[j]<=x){
                swap(A[i], A[j]);
                ++i;
            }
        }
        swap(A[i], A[r]);
        return i;
    };
    _ quickSort= [&](_& A, _ p, _ r, _ qs)->void{
        if(p<r){
            _ q=partition(A,p,r);
            qs(A, p,q-1,qs);
            qs(A,q+1,r,qs);
        }
    };
    quickSort(arr,0,len(arr)-1,quickSort);
    print("Sorted: ",arr);
    print(count,"Comparisions");

}