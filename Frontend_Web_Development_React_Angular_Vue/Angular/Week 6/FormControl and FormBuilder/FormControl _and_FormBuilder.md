# FormControl
 
 FormControl is an inbuilt class that is utilized to get and set qualities and approval of the structure control fields like <input> or <select>. The FormControl tracks the worth and approval status of a singular structure control. It tends to be utilized independent just as with a parent structure.
  
# FormControl Methods
  
  There are lots of method to write in angular some of them are shown below :- 
  
  1 setValue()
  2 patchValue()
  3 reset()
  4 _updateValue()
  5 _anyControls()
  6 _allControlsDisabled()
  7 registerOnChange()
  8 registerOnDisabledChange()
  9 _forEachChild()
 10 _syncPendingControls()
 
# FormBuilder
 
 The FormBuilder provides syntactic sugar that shortens creating instances of a FormControl, FormGroup, or FormArray. It reduces the amount of boilerplate needed to build complex forms.
 
# FormBuilder Methods
 
 Below are the methods used in angular for FormBuilder :-
 
 1 group()
 2 control()
 3 array()
 
# Initializing FormControls
 
Instantiate a FormControl, with an initial value.
 
 ```css
 const control = new FormControl('some value');
console.log(control.value);     // 'some value'
 ```
 The following example initializes the control with a form state object. The value and disabled keys are required in this case.
 
 ```angular
 const control = new FormControl({ value: 'n/a', disabled: true });
console.log(control.value);     // 'n/a'
console.log(control.status);    // 'DISABLED'
 ```
 The following example initializes the control with a synchronous validator.
 
 ```angular
 const control = new FormControl('', Validators.required);
console.log(control.value);      // ''
console.log(control.status);     // 'INVALID'
 ```
