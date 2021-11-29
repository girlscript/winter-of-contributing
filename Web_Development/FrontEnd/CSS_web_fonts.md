# CSS WEB FONTS

CSS Web Fonts allow us to specify font files that are available on the web, to be downloaded along with the website when it is accessed. In other words, we can use fonts that  can be loaded from either a remote server or from the user's own computer . After choosing the the desired font, include the font file on the web server and you are good to go.
This font can be defined within the CSS ` @font-face ` rule.

```css
@font-face {
    /*Font Descriptors*/
}
```
### Font Descriptors
Font Descriptors are used to provide additional information about the font.

Required Descriptors:
- ` font-family `: Defines the name of the font
- ` src `: Defines the URL to get the font 
Optional Descriptors:
- ` font-style `: 'italic', 'oblique' or 'normal'
- ` font-weight `: Boldness of the font ('norma;', 'bold', 100-900)
- ` font-stretch `: 'normal', 'condensed', 'expanded' ('condensed' and 'expanded' have ultra, extra and semi variants)

Example: Web fonts in HTML

```html
<!DOCTYPE html>
<html>
<head>
  <style>
    @font-face {
 		font-family:monospace;   	  /* Set font family to monospace */
		src:url(sansation_light.woff);
	       }
		
	    * { 
		font-family:monospace;
		font-style:italic;                /* font style to italic */      
	      }
    
            p {
                font-weight: bold;    
	      }
   </style>
</head>
 <body>
     <div>
	<h1>Web Development</h1>
	<h2>CSS Web Fonts</h2>
     </div>
	<p>Monospace</h1>
</body>
</html>					
```
![image](https://user-images.githubusercontent.com/76458668/140291077-904395b6-6516-441c-9b9d-cf53cc34fad8.png)


### Font Formats

Web fonts are available in various font formats. 

- TTF - TrueType Fonts: The most common font format standard developed by Apple and Microsoft that runs on Mac and Windows OS.  It describes each glyph, that are scalable as a set of closed curves specified using points. For instance, 'i' has two paths- one for the bottom part and the other for the dot.

- OTF - OpenType Fonts: A font format built on TrueType that allows a single font to support multiple writing systems within the same script. Its a commonly used format in many computer platforms today.

- WOFF - Web Open Font Format - A format used in web pages whose goal is to support font distribution from a server to a client in a network with bandwidth constraints. It is a compressed OpenType/TrueType with additional metadata. WOFF has a second version (WOFF2) that differs with respect to the compression algorithm used.

- EOT - Embedded OpenType format - Compact OpenType fonts that are used as embedded fonts on web pages.

- SVG Fonts -  Glyph information is embedded into SVGs. The SVG 1.1 version allows creation of fonts within a SVG document.

References:
- [https://www.digitalocean.com/community/tutorials/css-font-face](https://www.digitalocean.com/community/tutorials/css-font-face).
