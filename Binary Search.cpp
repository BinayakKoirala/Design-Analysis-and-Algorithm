#include<cpp>
#include<iostream>
using namespace std;
_ maxx(_ a,_ b){
    return a>b?a:b;
}

//Sorting data, in order to apply binary search
_ sort(_ a){
    for(_ j =1;j<len(a); j++){
        _ key= a[j];
        _ i=j-1;
        
        while (i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1] =key;
        
    }
    return a;
}

//Binary search
_ bs(_ x, _ T, _ p, _ r){
    int count=0;
    _ low=p;
    int high=(int) maxx(p,r+1);
    int mid;
    while ( low < high ){
        mid = (int)((int)low + (int)high)/2;  
        if (x<=T[mid]){
            high=mid;
        }
        else{
            low=mid+1;
        }
        count++;
    }
    print("Total steps taken for ",len(T)," elements : ",count);
    return high;
}

int main(){
    _ a=random(1000,5000);
    a=sort(a); //Sorting array.
    _ p=0;
    _ r=len(a);
    // int x=(int)random(1,100);
    int x;
    print("Enter a number to search: ");
    cin>>x;
    _ res=bs(x,a,p,r);
    // print(res);
    print("After sorting arrya: ",a);
    print("Element generated: ",x);
    if(a[res]==x){
        print("Element found at index: ",res);
    }
    else{
        print("Element didnot found but we can insert this element at index",res);
    }
}