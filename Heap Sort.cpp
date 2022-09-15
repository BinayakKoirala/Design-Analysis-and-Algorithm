#include<cpp>
int main()
{
	_ arr = random(10,100);
	_ count=0;

	print("input: ",arr);

_ maxHeapify = [&](_& A,_ n,_ i,_ f)->void{
_  l= 2*i+1, r = 2*i+2, max=i;


if(l<n)  ++count;
if(r<n) ++count;

		if(l<n && A[l]>A[max])
			max = l;


		if(r<n && A[r]>A[max])
			max = r;

		if(max!=i){
			swap(A[i], A[max]);
			f(A, n, max, f);
		}
	};


//build the heap

for(_ i=len(arr)/2; i>=0; --i)
	maxHeapify (arr, len(arr),i, maxHeapify);
print("heap: ",arr);


// heap sort
for(_ i=len(arr)-1; i>0;--i){
	swap(arr[0],arr[i]);
	maxHeapify (arr,i,0, maxHeapify);
}

//test heap is correct or not.
// testHeap= [](_& A _i ,_ f)->int{
// 	_ l = 2*i + 1;
// 	r = 2*i + 2;
// 	n= len(A);
// 	lvalid = 1;
// 	rvalid = 1;

// 	if(l<n) 
// 		lvalid= A[l] ? f(A,l,f) : 0;

// 	f(r<n) 
// 		lvalid= A[r] ? f(A,r,f) : 0;

// 		return lvalid && rvalid ? 1 : 0;
// };

// print(testHeap(arr,0,testHeap)? "valid heap":"invalid heap");

print("sorted: ",arr);
print(count,"comparision");

}