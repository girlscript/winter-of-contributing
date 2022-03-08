// It is a sorting technique when range  of numbers are given .If the number are given from 1 to n then 1 will go to 0th index that means n will go in n-1 position index.
//Similarly if range is given from 0 to n then 0 will go to 0th index ,n will go to nth index and soon.
//The type of question where we use the trick is find the duplicate numbers in the array given that the numbers are in range 1 to n.
//Whenever the ques contains the word range we must always use cyclic sort first.
//Below program defines how to sort using cyclic sort technique


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
