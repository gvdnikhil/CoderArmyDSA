   
   #include<iostream>
   
    vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
        
        
        vector<int> res;
        
        for (int i =0;i<Q;i++)
        {
            int maxi = INT_MIN;
            int prefix=0;
            int s= L[i],e =R[i];
            while ( s<=e)
            {
                prefix+= a[s++];
                maxi = max(prefix, maxi);
            }
            res.push_back(maxi);
        }
        return res;
    }