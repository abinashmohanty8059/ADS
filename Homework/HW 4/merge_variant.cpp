#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector <int> V1(n1), V2(n2);

    for(int i=0; i<n1;i++){
        V1[i] = arr[i + l];
    }
    for(int j=0; j<n2; j++){
        V2[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j =0;
    int k = l;
    while(i<n1 && j<n2){
        if(V1[i]<V2[j]){
            arr[k] = V1[i];
            i++;
        }
        else{
            arr[k] = V2[j];
            j++;
        }

        k++;

    }

    while(i<n1){
        arr[k] = V1[i];
        i++;
        k++;

    }
    while(j<n2){
        arr[k] = V2[j];
        j++;
        k++;
    }



}

void insertion_sort(vector <int>& arr, int l, int r){
    for(int i = l+1; i<=r; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=l && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

void merge_sort(vector <int>& arr, int l, int r,int k){
    if(r-l+1<=k){
        insertion_sort(arr,l,r);
        return;
    }
    int mid = (l+r)/2;
    merge_sort(arr,l,mid,k);
    merge_sort(arr,mid+1,r,k);
    merge(arr,l,mid,r);
}
int main(){



    vector <int> data1 = {1,2,3,4,5,6,7};
    vector <int> data2 = {7,6,5,4,3,2,1};
    vector<int> data3 = {5,7,9,2,6,3,5,6};

    vector <int> k = {2,4,6,8};
    merge_sort(data1,0,data1.size()-1,3);
    for(int i =0; i<data1.size();i++){
        cout<< data1[i] << endl;
    }

    
    return 0;
}