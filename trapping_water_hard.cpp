class Solution {
public:
    int trap(vector<int>& height) {
    //     int n =height.size(); 
    //     int p_max[n];// prefix max  array
    //     int s_max[n];// suffix max  array
    //     p_max[0] = height[0];
    //     s_max[n-1] = height[n-1];
    //     for ( int i=1;i<n;i++)
    //     {
    //         p_max[i] = max(p_max[i-1],height[i]);
    //     }

    //     for ( int i = n-2;i>=0;i--)
    //     {
    //         s_max[i] = max(s_max[i+1],height[i]);
    //     }
    // int sum =0;
    //     for(int i =0;i<n;i++)
    //     {
    //         cout<< s_max[i]<<" ";

    //     // slelcting the water  volume at each pillar 
    //         sum += min(p_max[i],s_max[i]) -height[i];
    //     } 


    //     return sum;
    // }



    // Method 2 

    int n = height.size();
    int leftmax = height[0];
    int maxi = INT_MIN;
    int maxi_ind =0;
    int rightmax =height[n-1];
    // loop to find maxi element in the array
    for ( int i=0;i<n;i++)
    {
        if ( height[i]>maxi)
        {
            maxi = height[i];
            maxi_ind = i;
        }

        
    }
    int water =0;

    for ( int i =0;i<maxi_ind;i++)
    {
        leftmax = max(leftmax,height[i]);
        water += leftmax -height[i];
    }
  
    for ( int i = n-1;i>maxi_ind;i--)
    {
        rightmax = max(rightmax,height[i]);
        water += rightmax- height[i];
    }

    return water;
    }
};
//  I really succeedd in writing the code 