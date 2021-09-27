int peakElement(int arr[], int n)
    {
       int peak=arr[0];
       for(int i=1;i<n;i++)
       {
           if(i!=n-1)
            {
                if(arr[i]>peak && arr[i]>arr[i+1])
                    peak = arr[i];
            }
            else{
                if(arr[i]>peak)
                    peak=arr[i];
            }
       }
       return peak;
    }