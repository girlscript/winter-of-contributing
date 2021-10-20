int  largest_power_of_2_in_range(int n){
        int x=0;
        while((1<<x)<=n)
        x++;
        return x-1;
    }
    int countSetBits(int n)
    {
      if(n==0)
      return 0;
      int x=largest_power_of_2_in_range(n);
      int b=x*(1<<(x-1));
      int c=n-(1<<x)+1;
      int rest=n-(1<<x);
      int ans=b+c+countSetBits(rest);
      return ans;

        // Your logic here
    }
