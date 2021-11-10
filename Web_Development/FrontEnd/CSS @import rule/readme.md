# @import
The CSS @import at-rule is used to import style rules from other style sheets and to support media queries. 

## Syntax

``` CSS
@import url;
@import url list-of-media-queries;
@import url supports( supports-query );
@import url supports( supports-query ) list-of-media-queries;
```

where,

*_url_*
  > Is a ``` <string> ```  or a ``` <url>() ``` representing the location of the resource to import. The URL may be absolute or relative.


*_list-of-media-queries_*
  > The list of media queries condition the application of the CSS rules defined in the linked URL

*_supports-query_*
  > Is either a ``` <supports-condition> ``` or a ``` <declaration> ```.


## Description

The @import keyword must be followed by the URI of the style sheet to include. A string is also allowed. It must be at the top of the document but after the __@charset__ rule.

## Example

``` HTML
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width">
    <title>Hello, Welcome!!</title>
    <style>
      @import url('https://fonts.googleapis.com/css?family=Coiny');
      @import url('https://fonts.googleapis.com/css?family=Lobster');
      .p {
        font-family: 'Coiny', cursive;
      }
    </style>
  </head>
  <body>
    <p>Here's an example of @import rule in CSS</p>
  </body>
</html>

```
