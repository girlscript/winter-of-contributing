# HTML detail tag
It can be used when we need create a widget in which initially content is hidden and it displays the content when user clicks on it. The content of the details tag is visible when open the set attributes. The summary tag is used with the details tag for specifying visible heading. 

## Attributes
`open` : This is basically a boolean attribute which tells whether it will show details or not if attribute exists then the elements of detail will be visible and if attribute is not present then it will hide the elements of detail tag.
## Syntax
```html
<details>
    <summary>content</summary>
    <div> hidden content </div>
</details>
```

## Example for detail tag

https://user-images.githubusercontent.com/84950175/142004174-27b598a2-3a61-4b1a-9fb9-482837d13171.mov


**Code**
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
