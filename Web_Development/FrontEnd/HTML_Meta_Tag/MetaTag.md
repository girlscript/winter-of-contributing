# **HTML : Meta Tag**  
<br>

## **What is HTML ```<meta>``` tag ?**
The meta-data means a set of data that describes or gives more information on other data. The ```<meta>``` tag in HTML provides important information about HTML document created which is relevant to browser. HTML ```<meta>``` tag is used to represent the metadata about the HTML document. It specifies properties of HTML documents, such as page description, keywords, copyright, language, author of the documents, expiry date , viewport setting, etc.
<br>

Syntax : 

 ```
 <meta attribute-name="value">
 ```

<br>

## Visiblity of metadata on browsers-

![image](https://user-images.githubusercontent.com/75716335/139000776-830f91e1-fad9-4db0-82e1-3f2fc43525ad.png)

Source : Google Images

<br>

## **Key Points :**
- The <meta> tag is placed within the <head> tag, A web (HTML) document can include one or more meta tags depending on information, but in general, it doesn’t affect the physical appearance of the document.

- ```<meta>``` tag is an empty element because it only has an opening tag and no closing tag, but it carries information within its attributes.

- The metadata doesn't display on the webpage, but it is used by search engines, browsers and other web services which scan the site or webpage to know about the webpage.

- The <meta> tags are added to our HTML document for the purpose of Search Engine Optimisation (SEO).

- With the help of ```<meta>``` tag, you can experiment and preview that how your webpage will render on the browser.
 
<br>

## **Advantages of using ```<meta>``` tag in HTML (web) document :**

1. Adding the meta tag while making the webpage or website, is a great practice because search engines like Google search look for this meta tag in order to understand the information provided by the website and accordingly show them in under relevant search. 

2. It is also helpful if the user search for a specific website then the search engine result page will display snippets of metadata in search results that will provide information related to that website.

3. Meta descriptions can assist you to improve your page's search engine rating. In search engine results, a meta description is a brief explanation of upto 160 characters that appear after the title and URL.

<br>

## **Attributes in ```<meta>``` tag :**

 This tag accept four attributes which are mentioned and described below.

- **name:** This attribute is used to define the name of the property.
- **http-equiv:** This attribute is used to get the HTTP response - message header.
- **content:** This attribute is used to specify properties value.
- **charset:** This attribute is used to specify a character encoding for an HTML file.
<br>

>## **Note:**
>The ```<meta>``` tag also accepts Global Attributes as well as Event Attributes in HTML.

<br>

## **Following are some specific syntaxes of meta tag which shows the different uses of meta Tag :**

1. ```<meta charset="utf-8">```   
It defines the character encoding. The value of charset is "utf-8" which means it will support to display any language. 

<br>

2. ```<meta name="keywords" content="Travel, Blog"> ```    
It specifies the list of keyword which is used by search engines.

<br>

3. ```<meta name="description" content="Free Travel planners, guidelines...">```    
It defines the website description which is useful to provide relevant search performed by search engines.

<br>

4. ```<meta name="author" content="thisauthor">```   
It specifies the author of the page. It is useful to extract author information by Content management system automatically.

<br>

5. ```<meta name="refresh" content="50">```    
It specifies to provide instruction to the browser to automatically refresh the content after every 50sec (or any given time).

<br>

6. ```<meta http-equiv="refresh" content="5; url=https://www.abc.com/travel-blogs">```     
In the above example we have set a URL with content so it will automatically redirect to the given page after the provided time.

<br>

7. ```<meta name="viewport" content="width=device-width, initial-scale=1.0">```   
It specifies the viewport to control the page dimension and scaling so that our website looks good on all devices. If this tag is present, it indicates that this page is mobile device supported.

<br>

## **Example to demonstrate use of meta tag :**
<br>

In the example given below, more than one  ```<meta>``` tag with different attributes namely keywords, description, author, http-equiv and name is used to describe the HTML document in order to help browser recognize this document and show it under relevant search by scanning these attributes of ```<meta>``` tag.

```
Eg-

<html> 

<head>  
    <meta charset="utf-8">  
    <meta name="keywords" content="HTML, CSS, JavaScript, Website">  
    <meta name="description" content="Travel Blog Website">  
    <meta name="author" content="thisauthor">  
    <meta http-equiv="refresh" content="5; url=https://www.google.co.in/">   
    <meta name="viewport" content="width=device-width, initial-scale=1.0">    
</head> 

<body>

   <h2>Welcome to our Travel Blog Website</h2>  
   <p>This example shows the use of meta tag within an HTML document.</p> 

</body> 

</html>  

```

<br>

## **Output:**

![image](https://user-images.githubusercontent.com/75716335/139000884-6e844ef6-bc75-49f5-a822-b2bd4dd40095.png)
 
Source: Output (VSCode)

<br>

## **Values that an attribute of ```<meta>``` tag can have:**

1. **charset**   
   Value - character_set   
   Description - It specifies the character encoding of an HTML page.

<br>

2. **content**   
   Value - text  
   Description - It contains the value of the attribute "name" and "http-equiv" in an HTML document, depending on context.

<br>

3. **http-equiv**   
   Value - Content-type, default-style, refresh  
   Description - It specifies the Information given by the web server about how the web page should be served.

<br>

4. **name**  
   Values - application-name, author, description, generator, keywords
   Description - It specifies the name of document-level metadata.

<br>

5. **scheme**   
   Value - format/URL   
   Description - It specifies the scheme in which metadata is described. (Not Supported in HTML5)

<br><br>


## **Supporting Browsers :**
Element - ```<meta>``` tag 
<br>   

| **Chrome** |  **IE** | **Firefox** | **Oracle** | **Safari** |

<br>

---
*Thanks for reading !*
