int peak(int arr[],int size){
    int s = 0;
    int e = size - 1;

    int ans = 0;

    while(s<=e){
        int mid = s + (e - s) / 2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            ans = mid;
            return ans;
        }else if(arr[mid]<arr[mid+1]){
            s = mid + 1;
        }else if(arr[mid]>arr[mid+1]){
            e = mid - 1;
        }
    }

    return ans;
}