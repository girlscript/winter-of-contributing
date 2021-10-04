# DNF Sort Algorithm

- DNF is stand for Dutch National Flag Sort Algorithm.
- DNF is the only alogrithm which sort array of `0s` , `1s` & `2s` element only hence it is also called `0, 1, 2` Sort.
- We always denoting `0s` with `RED` color, `1s` with `WHITE` color and `2s` with `BLUE` color. All the `unknowns` with `GREY' color. 
- This sorting algorithm name `DNF` is based on the colors of National Flag of Netherlands and the word `Dutch` is the widely spoken language in Netherlands.

Let's see the DNF Sort Algorithm :

Suppose arr[15] = { 0 , 0 , 1 , 1 , 1 , 0 , 1 , 2 , 0 , 2 , 0 , 1 , 2 , 2 , 2 }

![DNF](DNF.png)

```
Check value of arr[mid] -
    1. if arr[mid] = 0, swap arr[low] and arr[mid]
    2. low++ and mid++
    3. if arr[mid] = 1, mid++
    4. if arr[mid] = 2, swap arr[mid] and arr[high]
    5. high--
```

Let's see the example :

arr[10] = {}
