class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int i=1;
        int upper,lower;
        
        while(i<n)
       { 
            //Each time after traversing one mountain or not,we have to set upper & lower to 0
            upper=0;lower=0;            
        
            //for flat array,where elements are equal
            while(i<n && arr[i-1]==arr[i])    
            
            //This also handles when we get same adjacent elements
              i++;  
            
             //Increasing part of mountain
            while(i<n && arr[i-1]<arr[i])   
            {  upper++;i++;
                
            }
                    
             //Decreasing part of mountain
           while(i<n && arr[i-1]>arr[i])    
           {
               lower++;
               i++;    
           } 
            
        //Mountain only exists if we have both incresing part and decreasing part adjacently
          if(upper && lower)      
           { 
              ans=max(ans,lower+upper+1);
           }
        
        }
        
        return ans;
    }
};
