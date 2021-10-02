# Left rotate array by D places

[Left-rotate-array-by-D-places](#Left-rotate-array-by-D-places)

Problem Statement : It rotates the position of elements in the array by D places.

So that means if we have given an array of size n . we need to rotate the array by D places.
*For example: array[]={1,2,3,4,5,6,7,8,9,10}, D=3
*The output should be: {4,5,6,7,8,9,10,1,2,3}

 **Tabular Representation of Left Rotate Array by D Place**:--

| Array Index   | 0   | 1    |2     | 3    | 4    | 5    | 6    | 7    | 8    | 9    |
| ------------- | --- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| Before Rotate | 1   | 2    | 3    | 4    | 5    | 6    | 7    | 8    | 9    | 10   |
| After Rotate  | 4   | 5    | 6    | 7    | 8    | 9    | 10   | 1    | 2    | 3    |

- ***Algorithm***:-

- START

- *STEP 1*:-  Take size of the Array and Input Array Elements.

- *STEP 2*:-  Take input From user from which position the ```Array``` to rotate.

- *STEP 3*:-  Store The first D element in another Array.

- *STEP 4*:-  Shift the Rest of The Array .

- *STEP 5*:-  Store back the D elements in First Array.

-END

 **Problem Solution**:-

 ```Java
import java.util.Arrays;
import java.util.Scanner;

class LfRotate{
    void leftRotate(int arr[], int d)
    {
        for (int i = 0; i < d; i++)
            shift(arr);
    }
 
    void shift(int arr[])
    {
        int i, b;
        b = arr[0];
        for (i = 0; i < arr.length - 1; i++)
            arr[i] = arr[i + 1];
        arr[arr.length-1] =b;
    }
}
public class Main {
    public static void main(String[] args)throws Exception {
     try {
     Scanner sc = new Scanner(System.in);
     System.out.print("Array Size : ");
     int size=sc.nextInt();
     int []arr = new int [size];
     System.out.println("\nEnter Array Elements : ");
     for (int i = 0; i < arr.length; i++) {
     arr[i] = sc.nextInt();   
     }
     
     System.out.print("Enter position of D place : ");
     int D=sc.nextInt();
     LfRotate obj = new LfRotate();
     System.out.println("\nBefore Rotate Array is : "+Arrays.toString(arr));
     obj.leftRotate(arr, D);
     System.out.println("\nAfter  Rotate Array is : "+Arrays.toString(arr));
     sc.close();   
     } catch (Exception e) {
         System.out.println(e);
     }   
    }
}
```

``` j
output :
Array Size : 10

Enter Array Elements :
1 2 3 4 5 6 7 8 9 10
Enter position of D place : 5

Before Rotate Array is : [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

After  Rotate Array is : [6, 7, 8, 9, 10, 1, 2, 3, 4, 5]
```

- **Time and Space Complexity**:-

- *Time complexity :* ```O(n)```.
- *Space complexity :* ```O(n)```.

# Conclusion

To Rotate the Array by D places we have to store first D element in another Array First Then we have to shift the rest of the array then have to restore the first D element form the another Array . Then we got our desire output.

Thank you. :sunglasses:
Happy learning  :wave:

[Back to top](#Left-rotate-array-by-D-places)
