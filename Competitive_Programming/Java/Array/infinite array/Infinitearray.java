// Searching in infinite array .Basically the approach is first we willbe taking two elements checking whether target is less than end element if greater than then we will double the array
//the array start will move to end and end will move to start+(end-start)/2 and so on when we will find the start and end index we will pass it for binary search 
//Both the time we are doinf binary search in first function we are moving opposite of binary search search which means in binary search we half the arrays but here i am double the array to find my search start and end
// in second function we are doing normal search to find the target elemnt position .
// Throughout the program I have not used length function since it is infinite array so we do not know the length of the array.
import java.util.*;

public class Infinitearray {

	public static void main(String[] args) {
		
		int[] a= {1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66,77,88,92,94,95,101,102,103,104,105,106,107,108,110,220,700};
		int target=100;

	
		System.out.println(ifinitearray(a,target));

	}
static int ifinitearray(int[] a,int target) //This function is finding the start and end for binary search
{
	int start=0;
	int end=1;
	while(target>a[end]) {
		
		int temp=end+1;
		end=end+(end-start+1)*2;   // doubling the array
		start=temp;
	}

	return binsrch(a,start,end,target);
		
}
static int binsrch(int[] a,int start,int end,int target)   // normal binary search to find the index of our target element
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
