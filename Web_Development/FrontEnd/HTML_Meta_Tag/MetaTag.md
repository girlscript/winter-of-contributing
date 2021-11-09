# HTML : Meta Tag 

The meta-data means a set of data that describes or gives more information about other data of webpage. The ```<meta>``` tag in HTML provides important information about created HTML document, which is relevant to browser. This tag is used to define or represent the metadata of the HTML document on browser. It specifies properties of HTML document, such as description of the page, keywords, language, author of the documents, expiry date , viewport setting, etc.

Syntax 

 ```
 <meta attribute-name="value">
 ```

## Visiblity of metadata on browsers

![metadata](https://user-images.githubusercontent.com/75716335/139000776-830f91e1-fad9-4db0-82e1-3f2fc43525ad.png)   
Source : Google Images (HTML Meta Tag)

## Key Points

- The ```<meta>``` tag is placed in the ```<head>``` tag, A web (HTML) document can include more than one meta tag depending upon the information given, but meta tags in general doesn't affect the appearance of actual html web page.

- It is an empty element, which carries information within its attributes.

- The metadata is not visible on the webpage, but it is relevant to browsers and search engine, which scan the site or webpage to know about the webpage.

- The meta tags are added to HTML document for the purpose of Search Engine Optimisation (SEO).

- By adding this tag to HTML document, you can preview that how your webpage will get rendered on the browser. 
 
## Advantages of using ```<meta>``` tag in HTML (web) document

1. Adding this tag while making the webpage, is a good practice because search engines like Google search look for this meta tag in order to understand the information provided by the website and accordingly show them under relevant search. 

2. It is also helpful when the user search for a specific website and there are more than thousands of results, then the search engine result page will display snippets of metadata in search results that will provide information related to that website, So that user can navigate fast through different websites.

3. Description in meta tag helps to improve page's search engine rating. In search engine results, a meta description is a brief explanation of 160 characters that appear after the title and URL.

## Attributes in ```<meta>``` tag

This tag accept four attributes which are mentioned below.

- **charset:** This attribute is used to specify character encoding for the HTML document.
- **name:** This attribute is used to define the name of the property in ```<meta>``` tag.
- **content:** This attribute is used to specify value of the properties.
- **http-equiv:** This attribute is used to get the HTTP response header for the information in the content attribute.

>**Note**
>The meta tag also accepts Global Attributes as well as Event Attributes in HTML.

## Example to demonstrate use of ```<meta>``` tag

In the example given below, more than one meta tag with different attributes namely keywords, description, author, http-equiv and name is used to describe the HTML document in order to help browser recognize this document and show it under relevant search by scanning these attributes of meta tag.

```html

<html> 

<head>  
    <meta charset="utf-8">  
    <meta name="keywords" content="Travel, Blog, HTML, CSS, JavaScript, Website">  
    <meta name="description" content="Travel Blog Website">  
    <meta name="author" content="authorname">  
    <meta name="viewport" content="width=device-width, initial-scale=1.0">    
</head> 

<body>

   <h2>Welcome to our Travel Blog Website</h2>  
   <p>This example shows the use of meta tag within an HTML document.</p> 

</body> 

</html>  

```

## Output

![image](https://user-images.githubusercontent.com/75716335/139000884-6e844ef6-bc75-49f5-a822-b2bd4dd40095.png)
 
## Values that an attribute of ```<meta>``` tag can have

1. **charset**   
   Value - character_set   
   Description - It shows the character encoding of the HTML page.

2. **content**   
   Value - text  
   Description - It contains the value of the attributes "name" and "http-equiv" in HTML document, which depends on the context of webpage.

3. **http-equiv**   
   Value - refresh, Content-type, default-style 
   Description - It specifies the information given by the web server about serving of the webpage.

4. **name**  
   Values - generator, author, description, application-name, keywords
   Description - It defines the name of document-level metadata.

5. **scheme**   
   Value - format/URL   
   Description - (Not Supported in HTML5) - It specifies the scheme in which metadata is described. 

## Browsers supporting ```<meta>``` tag element
- Chrome
- Oracle
- IE
- Safari
- Firefox

## Reference
- [Tutorialspoint](https://www.tutorialspoint.com/html/html_meta_tags.htm)
- [Javatpoint](https://www.javatpoint.com/html-meta-tag)
