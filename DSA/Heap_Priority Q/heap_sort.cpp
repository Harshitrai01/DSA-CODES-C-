#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i)  
    {
        int lt=2*i+1,rt=2*i+2;
        int largest=i;
        
        if(lt<n and arr[lt]>arr[largest])
            largest=lt;
        
        if(rt<n and arr[rt]>arr[largest])
            largest=rt;
            
        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }

        void buildHeap(int arr[], int n)  
    { 
        for(int i=(n-2)/2;i>=0;i--){
            heapify(arr,n,i);
        }
    }

        void heapSort(int arr[], int n)
    {   
        buildHeap(arr,n);
        for(int i=n-1;i>=1;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }



    int main(){
        
        int n=6;
        int arr[n]={6,3,7,1,0,4};
        heapSort(arr,n);
        cout<<"[";
        for(int i=0;i<n;i++){
            cout<<arr[i];
            if(i!=n-1) cout<<",";
        }cout<<"]";
    }