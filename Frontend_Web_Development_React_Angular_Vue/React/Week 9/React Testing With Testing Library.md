# **"React Testing With Testing Library"**

## **Introduction:**

* Testing Library has become the most sought after library compared to the rival enzyme. 
* Many people, organisations are already adopting Testing Library over Enzyme. 
* If you are using the latest version of creating react app tool then you already have Jest and Testing Library already installed for you. 


*Let’s dive in and see how to test a simple component.*



* As usual, let’s create our app with the following command. **I named my project testex** but feel free to name whatever you prefer.

> npx create-react-app testex

* Now time to cd into our project and start the app
> cd testex && npm start

* Now let's create a components folder and create a component named Body.

> Body.js created


> Example:

    import React, { useState } from "react";
    const Body = ({title}) => {
    //local state
    const [count, setCount] = useState(0)
    //click event handler for button
    const handleClick = () => {
        setCount(count+1)
    }
    return (
        <div>
            <h1 data-testid="header">{title}</h1>
            <p data-testid="counter">{count}</p>
            <button type="button" onClick={handleClick} data-testid="button">Tap Me</button>
        </div>
    )
    }
    export default Body;

* It’s time to reuse our component in the App.js file. Let’s update the App.js as below.

> Example:

    import React from 'react';
    import './App.css';
    import Body from './components/Body';

    function App() {
    return (
       <div className="App">
        <Body title="Learn React"/>
       </div>
     );
     }   
    export default App;

*If everything is fine at your end, you should have a functional app as below rendering in your browser.*

## **Now to initiate the tests, run the following command on the terminal (project root).**

> npm test

* Now the test suit should initialize and kick in. You may already see that one test case is already passing. 

* Keep the test suit running in the terminal. It’ll give you a real-time update as we write our test cases.

* It’s a good practice to write our test cases inside the __tests__ folder. Let’s create the folder and create the file Body.test.js.


*Let’s begin by importing the essentials.*

> Example:

    import React from 'react';
    import Body from '../Body';
    import {render} from '@testing-library/react';
    import userEvent from '@testing-library/user-event';

    describe("This suit is to test the Body component", ()=>{
    })

    
> Note:

* **“describe”** is a way to group our test cases together. 
* It’ll come in handy when you have hundreds of tests written.
* You can choose to run only selected test cases. But at this juncture, it doesn’t make much sense, but let’s follow the best practices.

## **Snapshot Testing**

Time to write our first test case. First, we’ll write a snapshot test. Snapshot test is actually going to keep a copy of your component, whenever you change something the test suit will inform you that something has been changed in your component. If you think its a necessary change, you can always choose to accept the new change.

> Example:

    import React from 'react';
    import Body from '../Body';
    import {render} from '@testing-library/react';
    import userEvent from '@testing-library/user-event';

    describe("This suit is to test the Body component", ()=>{
    test('Snapshot of Body', () => {
        const {asFragment} = render(<Body title="hello world"/>);
        expect(asFragment()).toMatchSnapshot()
    });    
    })


* The moment you write the test case (it can begin with either test or it keyword). You could see that, test suit has created the snapshot of your component inside __snapshots__ folder.

* Just to double-check whether the snapshot is working fine, let’s change something in the Body.js. You can simply add a new p tag and throw in some random string. Now, the test case will fail and you would see an error in the terminal. Don’t worry, just press the key u it’ll just automatically update the snapshot that is stored locally. If the u the option is not provided to you first, you may press w and then you’ll get the u option.

## **Finding Elements in DOM**

* Next step is to find elements in the DOM and check the value on them. Let’s start by checking whether the title prop we passed in is actually rendering on the screen.

* This time we’ll pass in a value for props and see whether that prop is available by writing a test case as below.

> Example:

    import React from 'react';
    import Body from '../Body';
    import {render} from '@testing-library/react';
    import userEvent from '@testing-library/user-event';

    describe("This suit is to test the Body component", ()=>{
    test('Snapshot of Body', () => {
        const {asFragment} = render(<Body title="hello world"/>);
        expect(asFragment()).toMatchSnapshot()
    });   
    
    test("finding title", ()=>{
        const {getByText} = render(<Body title="Jay Rocks"/>);
        expect(getByText("Jay Rocks")).toBeInTheDocument("Jay Rocks")
    })
    })

* getByText is used to check whether the string exists in our DOM. Great, our test is passing! 

* But, it’s not always a good idea to search for an element on the dom with a string right. Isn’t it nice to have some id so we can query it? well, Testing Library got you covered. If you check our Body.js component, we have something like data-testid="something". This can be used to search for an element in DOM. Let’s see how to do it.

> Example:

    test("finding title with TestId", ()=>{
    const {getByTestId} = render(<Body title="Jay Rocks"/>);
    expect(getByTestId("header")).toHaveTextContent("Jay Roc")
    //exact match
    expect(getByTestId("header")).toHaveTextContent(/^Jay Rocks$/)
    })

* with the help of getByTestId, we can query what we passed to data-testid in our component. This is much better than querying with a string right?

* Here also you can see how to match the exact string and match partially. I hope the example is self-explanatory on this.

* Before moving to the next type of testing, we’ll write a test case to check the counter value is set at zero when we launch the app for the first time.

> Example:

    test("check Counter initial value", ()=>{
    const {getByTestId} = render(<Body title="Jay Rocks"/>);
    expect(getByTestId("counter")).toHaveTextContent("0")
    })

## **User Events**

* Now, the time has come for us to check the user events. We gonna simulate the button click and see whether the counter increases on the UI.

> Example:

    test("check Counter value after a tap", ()=>{
    const {getByTestId} = render(<Body title="I Love Kavinie"/>);
    const button = getByTestId("button");
    userEvent.click(button)
     expect(getByTestId("counter")).toHaveTextContent("1")
    })

* As you can see above, first we get the reference to the button and using the userEvent, we are simulating a click event. Then we check the DOM to see whether the counter value has increased to 1. How cool is that!

* Let’s check whether it keeps increasing by writing the following test case.

> Example:

    test("check Counter value after tapping twice", ()=>{
    const {getByTestId} = render(<Body title="Jay Rocks"/>);
    const button = getByTestId("button");
    userEvent.click(button)
    userEvent.click(button)
    expect(getByTestId("counter")).toHaveTextContent("2")
    })  


