# DNF Sort Algorithm

- DNF is stand for Dutch National Flag Sort Algorithm.
- DNF is the only alogrithm which sort array of `0s` , `1s` & `2s` element only hence it is also called `0, 1, 2` Sort.
- We always denoting `0s` with `RED` color, `1s` with `WHITE` color and `2s` with `BLUE` color. All the `unknowns` with `GREY` color. 
- This sorting algorithm name `DNF` is based on the colors of National Flag of Netherlands and the word `Dutch` is the widely spoken language in Netherlands.

Let's see the DNF Sort Algorithm :

Suppose arr[15] = { 0 , 0 , 1 , 1 , 1 , 0 , 1 , 2 , 0 , 2 , 0 , 1 , 2 , 2 , 2 }

<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135977577-6670be36-e473-4ac4-9099-1d6150edf8fb.png" width="800" height="450">
</p>

```
Check value of arr[mid] -
    1. if arr[mid] = 0, swap arr[low] with arr[mid], low++ and mid++
    2. if arr[mid] = 1, mid++
    3. if arr[mid] = 2, swap arr[mid] with arr[high], high--
```

<hr>

Let's see the example :

arr[10] = { 1 , 1 , 0 , 1 , 2 , 2 , 1 , 0 , 2 , 1}

`STEP 1: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975454-de9d102e-79e6-4164-b08d-dcfa1f642d80.PNG" width="800" height="450">
</p>

`STEP 2: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975456-e993603d-d5ee-464a-8973-77195519ffcc.PNG" width="800" height="450">
</p>

`STEP 3: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975457-0bc95771-3205-43aa-a775-2071411ccd15.PNG" width="800" height="450">
</p>

`STEP 4: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975459-9fe0cd27-0467-4588-b2d7-d69953000ea2.PNG" width="800" height="450">
</p>

`STEP 5: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975461-9a5e57f9-fd75-4538-8e13-dddcbf841d9d.PNG" width="800" height="450">
</p>

`STEP 6: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975463-d5da3eee-ab1e-43fa-a791-aaf8fefaf1ff.PNG" width="800" height="450">
</p>

`STEP 7: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975464-e888241b-a988-4378-b3a3-85728c0f8096.PNG" width="800" height="450">
</p>

`STEP 8: `
<p align="center">
<img  src="https://user-images.githubusercontent.com/67793499/135975465-8b1b8d57-479e-420a-abaa-c715217647e5.PNG" width="800" height="450">
</p>

`Input : ` <br>
Enter the size of array :<br>
10<br>
Enter elements of array (0s,1s and 2s) :<br>
1 1 0 1 2 2 1 0 2 1

`Output : ` <br>
Sorted Array : 
0 0 1 1 1 1 1 2 2 2

## Time Complexity of DNF Sort Algorithm :
```
while(mid<=high){
            if(arr[mid]==0){
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }else{
                swap(arr[mid], arr[high]);
                high--;
            }
        }


Time Complexity : O(N)

Reason : In each iteration, either mid gets incremented (mid++) or high gets decremented(high--).

Space Complexity : O(1)
```
