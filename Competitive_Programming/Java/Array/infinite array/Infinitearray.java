
import java.util.*;

public class Infinitearray {

	public static void main(String[] args) {
		
		int[] a= {1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66,77,88,92,94,95,101,102,103,104,105,106,107,108,110,220,700};
		int target=100;

	
		System.out.println(ifinitearray(a,target));

	}
static int ifinitearray(int[] a,int target)
{
	int start=0;
	int end=1;
	while(target>a[end]) {
		
		int temp=end+1;
		end=end+(end-start+1)*2;
		start=temp;
	}

	return binsrch(a,start,end,target);
		
}
static int binsrch(int[] a,int start,int end,int target)
{
	while(start<=end)
	{
		int mid=start+(end-start)/2;
	if(target==a[mid])
		return mid;
	else if(target>a[mid])
			start=mid+1;
		else 
			end=mid-1;	
		}
	return -1;
}
}
