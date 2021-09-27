# **<u>Interpolation</u>**

    Interpolation is a one way binding of data from component to view template. All kind of data properties can be displayed in view.

    It moves data in one direction from our components to HTML elements with double curly braces "{{}}" syntax. This means when value is updated in component then it is updated in view page as well.

<br><p align="center"><img src="assets/interpolation.jpg"></p><br>

# **Usages**
Different ways to deal with interpolation - 

**1. Simple Text**
- Used to display and evaluate text,strings,lists using double curly braces.
- Prevent naming collision with directive, templates or attributes

```` Code
@Component({
  template: `
    <div>
      <!-- Single text usage -->
      <h1>Hello from {{event}}</h1>
      <ul>
        <!-- Array usage -->
        <li *ngFor="let contributor of contributors">{{ contributor.name }}</li>
      </ul>
    </div>
  `
})
class AppComponent {
  contributors = [{name: 'Rama'}, {name: 'Shubham'}, {name: 'Lara'}];
  event = 'GWOC';
}
````

**2. Arithmetic Expressions**
- Used to evaluate expression using *{{}}*
- Avoid using Assignment operators such as *(=,+=,-=,...)*
- Avoid using Increment and Decrement operators
- Avoid using Bitwise operators such as *| and &*

```` Code
@Component({
  template: `
    <div>
      <h1>Print Subtraction</h1>
      <!-- Prints 22 -->
      <h6>{{a-b}}</h6>
    </div>
  `
})
class AppComponent {
  a = 30;
  b = 8;
}
````
**3. Invoke functions**
- Used to call function from view, process and then display.

```` Code
@Component({
  template: `
    <div>
      <h1>Print sum</h1>
      <!-- Prints 20 -->
      <h6>{{getSum(10,20)}}</h6>
    </div>
  `
})
class AppComponent {
  getSum(a,b) {
      return a + b;
  }
}
````




