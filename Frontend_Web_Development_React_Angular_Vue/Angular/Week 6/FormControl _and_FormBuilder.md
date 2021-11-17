## What is FormControl?

In Angular,The classes which contains the valid information and the some data values of any kind of form element is called the Form Controls. Is is the basic units for making the reactive forms and Every reactive form input is bounded by some form control.

## FormControl Methods

There are following methods used in FormControl , Some of them are as follows :- 

1. **setValue() :-** With the help of setValue() method , we can set the values for any individual control. It can change the whole value of the FormControl.
2. **patchValue() :-** with the help of the patchValue() method , we can chnage the defined properties of object into the Form Model.
3. **reset() :-**  With the help of reset() method , we can resets all the input changes to its initial state.
4. **_updateValue() :-** With the help of _updateValue() method , we can update any specific value of any form or inputs.

## What is FormBuilder?

The API which helps in the construction of forms in Angular is called the FormBuilder.It gives the shortcut way to build the FormGroup,FormBUilder FormControl instancely.
It minimize the code for forms which are complex.

## FormBuilder Methods

There are mainly three methods used in FormBuilder,which shown below :- 
1. **group() :-** It is used to create a new FormGroup instantly.
2. **control() :-** It is used to create a new FormControl by applying some validators , options and the state providing to control the from. 
3. **array() :-**  It is used to create a new FormArray by applying some provided configurations of array ,options and the validators.

## Initializing FormControls

we can initailize the FormControl Instantly by given some initial value.

```css
const control = new FormControl('some value');
console.log(control.value);     // 'some value'
```
The following example initializes the FormControl :

In this case disabled keys and value are required

```css
const control = new FormControl({ value: 'n/a', disabled: true });
console.log(control.value);     // 'n/a'
console.log(control.status);    // 'DISABLED'
```

In this case synchronous validator is required

```css
const control = new FormControl('', Validators.required);
console.log(control.value);      // ''
console.log(control.status);     // 'INVALID'
```
