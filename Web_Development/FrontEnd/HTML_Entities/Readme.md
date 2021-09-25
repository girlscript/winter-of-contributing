<h1 align="center">HTML Entities</h1>

> ### Used to display reserved characters in HTML

There are some characters that are used in and reserved by HTML code. (For example, the left and right angled brackets.)
<br>
Therefore, if you want these characters to appear on your page you need to use what are termed "escape" characters (also known as escape codes or entity references). For example,to write a left angled bracket, you can use either ```&lt;``` or ```&#60;```. For an ampersand, you can use either ```&amp;``` or ```&#38;```.
<br>

There are also special codes that can be used to show symbols such as copyright and trademark, currency symbols, mathematical characters, and some punctuation marks. For example, if you want to include a copyright symbol on a web page you can use either ```&copy;``` or ```&#169;```.
<br>

When using escape characters, it is important to check the page in your browser to ensure that the correct symbol shows up. This is because some fonts do not support all of these characters and you might therefore need to specify a different font for these characters in your CSS code
<br>

![5](https://user-images.githubusercontent.com/86145099/134108747-a40f3705-ca4d-4694-aa32-40b89b751522.PNG)

***
## :dart: Examples:

- copyright(```&copy;```) : This entity display the (©) on the screen;
  ```html  
  <p> &copy; Copyright 2021. All Rights Reserved </p>
  ```
  Output: <p> &copy; Copyright 2021. All Rights Reserved </p>

- Ampersand(```&amp;```) : This entity display the (&amp;) on the screen;
  ```html  
  <p>Ampersand using entity : &amp; </p>
  ```
  Output: <p>Ampersand using entity : &amp; </p>
                      
- Euro(```&euro;```) : This entity display the (&euro;) on the screen;
  ```
  <p>currency : &euro; </p>
  ```
  Output: <p>currency : &euro; </p>
- quotes(```&quot;```) : This entity display (&quot;) on the screen;
  ```html  
  <p>&quot;character&quot;</p>
  ```
  Output: <p>&quot;character&quot;</p>
  
- One-fourth(```&frac14;```): This entity display fraction one-fourth on the screen;
  ```html  
  <p>half of half is : &frac14;</p>
  ```
  Output: <p>half of half is : &frac14;</p>
  
- less than(```&lt;```) : This entity display the (&lt;) on the screen;
  ```html  
  <p> 1 &lt; 2 </p>
  ```
  Output: <p> 1 &lt; 2 </p>
  
- deree(```&deg;```) : This entity display the (&deg;) on the screen;
  ```html  
  <p> 37 &deg; </p>
  ```
  Output: <p> 37 &deg; </p>
  
- pi(```&pi;```) : This entity display the (&pi;) on the screen;
  ```html  
  <p> &pi; =3.14..... </p>
  ```
  Output:   <p> &pi; =3.14..... </p>
  
- snowman(```&#x2603;```):  This entity display the (&#x2603;) on the screen;
  ```html  
  <p>winter is fun &#x2603; </p>
  ```
  Output:   <p>winter is fun &#x2603; </p>
  
***

## :dart: Summary:

- It starts with an ampersand(&) and end with a semicolon(;)

- It is used to display reserved characters that would be normally invalid 

- It is also used in place of difficult to type characters

- The browser interprets it and renders the correct character.

## :books: Character Entity Reference Chart

https://dev.w3.org/html5/html-author/charref

## :books: Entity Decoder Tool

https://mothereff.in/html-entities
