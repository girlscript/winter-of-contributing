## **Bubble Sort**

Bubble sort is a simple sorting technique that works by repeatedly swapping the adjacent elements if they are in the wrong order.


### **Working of Bubble Sort:**

For example, let's take an unsorted array:

![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/mwzzrkig0sraujtbmtyc.png)


**First Pass:**


Starting with the first two numbers:

`15 34 27 36 10`

the first two numbers are in correct order. 

`15 34 27 36 10`

as 34 is greater than 27, we swap these two.

`15 27 34 36 10`

As 34 and 36 are already in sorted order, no swapping will be done.

`15 27 34 36 10`

Now, 36 is greater than 10 so these would be swapped

`15 27 34 10 36`

This is the end of the first pass.
After each pass the biggest number would move to the end of the array.Following four more passes the array would be-

![Alt Text](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/j3z6psq28sgk305n0ybw.png)


### **Algorithm:**

    start BubbleSort(arr)

    for all elements

        if(arr[i]> arr[i+1])

            swap(arr[i], arr[i+1])

        end if

    end for

    return arr

    end bubbleSort

Bubble sort is easy to use but not suitable for large data set.

## **Code In Java:**

    import java.util.*;
    public class BubbleSort {
    public static void main(String args[])
    {
        int i,j,n,temp;
        Scanner in=new Scanner(System.in);
        System.out.println("enter the no of element");
        n=in.nextInt();
        int a[]=new int[n];
        System.out.println("enter the elements");
        for (i=0;i<n;i++)
        a[i]=in.nextInt();
        boolean sorted=true;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<(n-i-1);j++)
            {
                if(a[j+1]<a[j])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    sorted=false;
                }
            }if(sorted)
            break;

        }
        for(int item:a)
        System.out.println(item+" ");
        
        
    }
    
    }


### **Complexity Analysis:**

In the first pass `n-1` comparisons will be done, in the second pass `n-2` and so on. So the total number of comparisons will be

    (n-1)+(n-2)+(n-3)+....+3+2+1
    sum=n(n-1)/2
    i.e O(n^2)

so, the **Time Complexity** of bubble sort is `O(n^2)` in the worst case.
In the best case when the list already sorted, the complexity is `O(n)`.

The **Space Complexity** is `O(1)`.


**Refrences:**
<a href="https://www.studytonight.com/data-structures/bubble-sort">Bubble Sort</a>



