here use binary search how can u use binary search?
see you just have to divide and conquer

class Solution 
{
    public static int ceil(int x,int y)
    {
        if(x%y==0)
        {
            return x/y;
        }
        else
        {
            return x/y+1;
        }
    }
    public double findMedianSortedArrays(int[] nums1, int[] nums2) 
    {

        if(nums1.length>nums2.length)//**always take small array as your working array**
        {
          int swap[]=nums1;
            nums1=nums2;
            nums2=swap;
        }
        int l=0;int r=nums1.length;
        while(l<=r) //** RUN BINARY SEARCH = because  when [1,2] [3,4] you just have to make l=2 and r=2 to get 2 as your index**
        {
            int mid=(l+r)>>1;//(l+r)/2;
            int mid1=ceil((nums1.length+nums2.length),2)-mid;/** remaining element to the left for example [1,2 ][3,4] when you make an array it is [1,2,3,4] to apply partion at the middle so that you can find midean . if u partition on [1|2] then remaining element to the left is one  which you take from second array [3|4] so the array becomes [1,3,2,4] thats why mid1=(ceil((nums1.length+nums2.length),2)-mid)=4/2=2-1=1;**/
            int no=Integer.MIN_VALUE; int no2=Integer.MAX_VALUE;int no3=Integer.MIN_VALUE; int no4=Integer.MAX_VALUE;
            if(mid1!=num2.length)no4=nums2[mid1];  if(mid!=nums1.length)no2=nums1[mid]; if(mid1!=0)no3=nums2[mid1-1];   if(mid!=0)no=nums1[mid-1];
          
            if(no<=no4 &&  no3<=no2)//if u get right partiotion  [1,2,3,4] then return accordingly
            {
                if((nums1.length+nums2.length)%2!=0)
                {
                    return Math.max(no,no3);
                }
                else
                {
                    return (Math.max(no,no3)+Math.min(no2,no4))/2.0;
                }
            }
            else
            if(no>no4)  if u get wrong partiton 
            {
                r=mid-1;
            }
            else
            if(no3>no2)/*if u get partion some what like this [1,3,2,4] then just shift it [1,2]| and |[3,4] partiotion example*/
            {
                l=mid+1;
            }
            
        }
        return -1;
    }
}
