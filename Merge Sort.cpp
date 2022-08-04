#include<cpp>

int main(){
    _ arr= random(10,100);
    print("Before Sorting: ",arr);
    _ count=0;

   _ sorted= $$(
        //base case
        $_(l) {
            $i = len(l)<2;
            return l;
        }, 
        //split 
        $_(l) {
            let a,b;
            l | $(x){
                len(a) < len(l)/2 ? a+=x : b+=x;
            };
            return {a,b};
        },
        //combine 
        $_(m) {
            _ [a, b] = __<2>(m);
            _ n=len(a) + len(b);
            a+= IMAX;
            b+= IMAX;
            let c;
            while(len(c) <n){
                a[0]<b[0] ? c+=--a : c+= --b;
                ++count;
            }
            return c;
        },
        arr

    );
    print("After Merge Sort: ",sorted);
    print("It took ",count," steps for ",len(arr)," elements");
}