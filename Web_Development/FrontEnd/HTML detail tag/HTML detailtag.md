# HTML detail tag
It can be used when we need create a widget in which initially content is hidden and it displays the content when user clicks on it. The content of the details tag is visible when open the set attributes. The summary tag is used with the details tag for specifying visible heading. 

# Attributes
`open` : This is basically a boolean attribute which tells whether it will show details or not if attribute exists then the elements of detail will be visible and if attribute is not present then it will hide the elements of detail tag.
### Syntax
```html
<details>
    <summary>content</summary>
    <div> hidden content </div>
</details>
```

### Example for detail tag
#### Initial look (when content is hidden)
<img width="1439" alt="Screenshot 2021-11-14 at 8 33 42 PM" src="https://user-images.githubusercontent.com/84950175/141691655-c96ba1f6-c11a-46ae-973d-b2135b80b0cd.png">

#### Final look (when content is displayed when user clicked on it)
<img width="1439" alt="Screenshot 2021-11-14 at 8 33 54 PM" src="https://user-images.githubusercontent.com/84950175/141691763-6c90f040-26ff-4869-8e5e-e6a09d06035b.png">

#### Code for above Example
```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>GWOC</h1>
   
    <details>
        <summary>GWOC</summary>
        <div>It is a 3 month program.</div>
    
    </details>
</body>
</html>
```

### Refrences
* [W3Schools](https://www.w3schools.com/tags/tag_details.asp)
* [MDN Web Docs](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/details)
