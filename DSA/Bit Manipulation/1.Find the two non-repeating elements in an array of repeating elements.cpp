vector<int> singleNumber(vector<int> nums) 
    {
        vector<int>v(2);
       int res=0;
       for(int i=0;i<nums.size();i++){
           res^=nums[i];
       }
       int temp=res,pos=0;
       while((temp&1)!=1){
           pos++;
           temp=temp>>1;
       }
       int mask=1<<pos;
       int x=0,y=0;
       for(int i=0;i<nums.size();i++){
         if((nums[i]&mask)>0)
         x^=nums[i];
       }
       y=res^x;
       v[0]=min(x,y);
       v[1]=max(x,y);
       return v;
    }
