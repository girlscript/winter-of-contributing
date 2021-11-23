<h1 align="center"> Jest in React</h1>

## :arrow_right: What is Jest in React ?
Jest is an open-source test framework created by Facebook for client-side JavaScript applications that has a great integration with React.js.It’s a framework designed with simplicity in mind and offers a powerful and elegant API to build isolated tests, snapshot comparison, mocking, test coverage, and much more.

**Note:** We need to install Jest before writing any test cases. When we run the create-react-app command, it will automatically install Jest in our React application.

**Installing and configuring Jest:-**
* In the embedded Terminal (Alt+F12), type:
npm install --save-dev jest

* You can also install the jest package on the Node.js and NPM page as described in npm, pnpm, and Yarn.

## :arrow_right:Where we use Jest In React ?
Jest is one of the best tools available for testing React applications.Testing is a line-by-line review of how your code will execute. A suite of tests for an application comprises various bit of code to verify whether an application is executing successfully and without error.

**Example:-**

The code below contains a function that solves the famous FizzBuzz programming interview question.

```jsx
function fizz_buzz(numbers) {
    let result = []
    
    for (number of numbers) {
        if (number % 15 === 0) {
            result.push('fizzbuzz')
        } else if (number % 3 === 0) {
            result.push('fizz')
        } else if (number % 5 === 0) {
            result.push('buzz')
        } else {
            result.push(number)
        }
    }
    
    return result.join(', ')
}

module.exports = fizz_buzz;
```
Same code with Jest's syntax:-

A describe() function in Jest groups related tests together inside one test suite. It takes a name parameter, which should describe the component you’re testing, and a callback function where individual tests are defined with it.

```jsx
const fizz_buzz = require('./index');

describe("FizzBuzz", () => {
    test('[3] should result in "fizz"', () => {
      expect(fizz_buzz([3])).toBe('fizz');
    });

    test('[5] should result in "buzz"', () => {
      expect(fizz_buzz([5])).toBe('buzz');
    });

    test('[15] should result in "fizzbuzz"', () => {
      expect(fizz_buzz([15])).toBe('fizzbuzz');
    });

    test('[1,2,3] should result in "1, 2, fizz"', () => {
      expect(fizz_buzz([3])).toBe('fizz');
    });

});
```

Here, we’re verifying that:
* passing an array containing 3 should result in “fizz”
* an array containing 5 should result in “buzz”
* an array containing 15 should result in “fizzbuzz”
* passing an array with 1, 2, and 3 should result in “1, 2, fizz”

You should see a result like the following:

<img src="https://user-images.githubusercontent.com/72224843/142939137-e735f5e0-f8fb-4771-9026-d4212bef0040.png" width=700 height=400></img>

As you can see here, you had a test of Jest and all four tests passed. All test suites were executed—which makes sense, since we only have one. The total time for execution was 0.616 seconds.

## :arrow_right:Benefits of the Jest
Some of the advantages/features of Jest are given below:

* Zero configuration required.
* Fast: Jest tests run in parallel – this in turn greatly reduces the test execution time.
* Built-in code coverage: Jest supports code coverage out of the box – this is a very useful metric for all CI-based delivery pipelines and overall test effectiveness of a project.
* Isolated and sandboxed tests: Each Jest test runs in its own sandbox, which ensures no two tests can interfere or impact each other.
* Powerful Mocking support: Jest tests support all types of mocking – be it functional mocking, timer mocking, or mocking individual API calls.
* Support snapshot testing: Snapshot testing is relevant from the React perspective. Jest supports capturing a snapshot of the react component being tested – this can validate with the component’s actual output. This greatly helps in validating the component’s behavior.

## :arrow_right:References

 https://jestjs.io/<br>
 https://www.softwaretestinghelp.com/jest-testing-tutorial/<br>
 https://www.smashingmagazine.com/2020/06/practical-guide-testing-react-applications-jest/<br>
