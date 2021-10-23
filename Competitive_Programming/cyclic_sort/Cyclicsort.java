import java.util.*;

class Cyclicsort{

	public static void main(String[] args) {
		int a[]= {5,4,2,6,1,3};
		sort(a);

	}
	static void sort(int[] arr)
	{
		int i,correct=0,t,p=1;
		for(i=0;i<arr.length;i++)
		{
			correct=arr[i];
			if(correct!=i-1)
			{
				t=arr[correct-1];
				arr[correct-1]=arr[i];
				arr[i]=t;
			}
			
		}

		System.out.println(Arrays.toString(arr));
	}

}
