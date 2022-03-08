
# React Forms
As we know HTML also provides a form but it's a bit different from other DOM(Document Object Module) in React.

The form below accepts a Name and Age as input.


```html
<form>
    <label>
        Name:
        <input type="text" placeholder="Name" />
    </label>
    <label>
        Age:
        <input type="number" placeholder="Age" />
    </label>
     <input type="submit" value="Submit" />
</form>
```
The above example can be used inside a functional as well as the class component.


#### Class Component:
```javascript
    class Form extends React.Component{
        render(){
            return(
                <form>
                    <label>
                        Name:
                        <input type="text" placeholder="Name" />
                    </label>
                    <label>
                        Age:
                        <input type="number" placeholder="Age" />
                    </label>
                    <input type="submit" value="Submit" />
                </form>
            )
        }
    }
```

#### Functional Component:
```javascript
    function Form() {
        return(
            <form>
                <label>
                    Name:
                    <input type="text" placeholder="Name" />
                </label>
                <label>
                    Age:
                    <input type="number" placeholder="Age" />
                </label>
                <input type="submit" value="Submit" />
            </form>
        );
    }
```

As we know there is a default behaviour of forms, i.e, After submission the form reloads but this is not how react behaves.
To control this behaviour we use Form Handling.


# Handling Forms

Form Handling in React is basically done by components whereas the HTML forms are handled by DOM(document Object Module) 
It is nothing but how the data is processed after submisson of the form.

#### 
While using components all the data after submission is stored the component state.

#### 
The [onChange]() attribute can be used to take the inputs and change the state of the form.

#### 
For changing state we use the [useState]() Hook to keep the track of inputs and give the entire application a "single source of truth".
# 

## Example1:

Forms using [useState]() Hook and [onChange]() attribute.

```javascript
    import React,{ useState } from "react";
    import ReactDOM from "react-dom";

    function Form(){
        const [input,setInput] = useState("");

        const handleChange= (event) => {
            setInput(event.target.value)
        }
            
        return(
            <form>
                <label>
                    Name:
                    <input 
                        type="text" 
                        placeholder="Name" 
                        value={input} 
                        onChange={handleChange}
                    />
                </label>
            </form>
        )
    }

    ReactDOM.render(
        <Form />, 
        document.getElementById('root')
    );
```

## Example2:

Using [onSubmit]() attribute in forms.

```javascript
    import React,{ useState } from "react";
    import ReactDOM from "react-dom";

    function Form(){
        const [input,setInput] = useState("");

        const handleChange= (event) => {
            setInput(event.target.value)
        }

        const handleSubmit= (event) => {
            event.preventDefault();
        }
            
        return(
            <form onSubmit={handleSubmit}>
                <label>
                    Name:
                    <input 
                        type="text" 
                        placeholder="Name" 
                        value={input} 
                        onChange={handleChange}
                    />
                </label>

                <input type="submit" placeholder="Submit"/>
            </form>
        )
    }

    ReactDOM.render(
        <Form />, 
        document.getElementById('root')
    );
```

## Example3:

Adding multiple [<input>]() types:

```javascript
    import React,{ useState } from "react";
    import ReactDOM from "react-dom";

    function Form(){
        const [input,setInput] = useState({});

        const handleChange= (event) => {
            const name = event.target.name;
            const value = event.target.value;
            setInput(data => ({...data, [name]: value}))
        }

        const handleSubmit= (event) => {
            event.preventDefault();
        }
            
        return(
            <form onSubmit={handleSubmit}>
                <label>
                    Name:
                    <input 
                        type="text" 
                        placeholder="Name" 
                        value={input.name} 
                        onChange={handleChange}
                    />
                </label>
                <label>Age:
                    <input 
                        type="number" 
                        name="age" 
                        value={input.age} 
                        onChange={handleChange}
                    />
                </label>

                <input type="submit" placeholder="Submit"/>
            </form>
        )
    }

    ReactDOM.render(
        <Form />, 
        document.getElementById('root')
    );
```
React handles all the child elements of form similar to that of [<label>]() and [<input>]() tag.

