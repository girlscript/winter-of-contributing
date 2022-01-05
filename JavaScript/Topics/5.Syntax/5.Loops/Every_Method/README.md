# Every Method

The `every()` method tests whether all elements in the array pass the test implemented by the provided function. It returns a Boolean value.

```jsx
function isBelowThreshold(currentValue){
	return currentValue < 40;
}

const array1 = [1, 30, 39, 29, 10, 13];

console.log(array1.every(isBelowThreshold));
```

### Output

```jsx
true
```

The method executes the function once for each element present in the 
array:

- If it finds an array element where the function returns a *false* value, every() returns false (and does not check the remaining values)
- If no false occur, every() returns true

`every()` does not execute the function for empty array elements.

`every()` does not change the original array

## Syntax

```jsx
array.every(function(currentValue, index, arr), thisValue)
```

### Parameters

`currentValue`	(Required) -  The value of the current element

`index`	(Optional) - The array index of the current element

`arr`	(Optional) - The array object the current element belongs to

### Return Value

A Boolean. Returns true if all the elements in the array pass the test otherwise, it returns `false`