# The “script” tag
  - JavaScript programs can be inserted almost anywhere into an HTML document using the <strong> <script> </strong> tag. 
  - Preferred to use before open <strong> body </strong> tag and after close <strong> body </strong> tag.
  - The <strong> <script> </strong> tag contains JavaScript code which is automatically executed when the browser processes the tag.
  
# Modern markup
  - The <strong> <script> </strong> tag has a few attributes that are rarely used nowadays but can still be found in old code:
  ### <strong>The type attribute: <script type = ...></strong>
  - The old HTML standard, HTML4, required a script to have a type. Usually it was <strong> type="text/javascript" </strong>.
  - It’s not required anymore. Also, the modern HTML standard totally changed the meaning of this attribute. 
  - Now, it can be used for JavaScript modules. But that’s an advanced topic.
  ### <strong>The language attribute: <script language = ...></strong>
  - This attribute was meant to show the language of the script. 
  - This attribute no longer makes sense because JavaScript is the default language. There is no need to use it.
# External scripts
  - If we have a lot of JavaScript code, we can put it into a separate file.
  - Script files are attached to HTML with the src attribute:
  <pre> <script src="/path/to/script.js"></script> </pre>
  - Here, <strong> /path/to/script.js </strong> is an absolute path to the script from the site root. One can also provide a relative path from the current page. 
  - For instance, <strong> src="script.js" </strong> would mean a file <strong> "script.js" </strong> in the current folder.
  - We can give a full URL as well. For instance:
  <pre> <script src="https://cdnjs.cloudflare.com/ajax/libs/lodash.js/4.17.11/lodash.js"></script> </pre>
  - To attach several scripts, use multiple tags:
  <pre> <script src="/js/script1.js"></script>
 <script src="/js/script2.js"></script>
  </pre>
  
  ### <strong> If src is set, the script content is ignored.</strong>
  - A single <strong> <script> </strong> tag can’t have both the src attribute and code inside. This won’t work:
  <pre> <script src="file.js">
    alert(1); // the content is ignored, because src is set
 </script>
  </pre>
  
  - We must choose either an external <strong> <script src="..."> </strong> or a regular<strong> <script> </strong> with code. 
  - The example above can be split into two scripts to work:
  <pre> <script src="file.js"></script>
 <script>
    alert(1);
 </script>
  </pre>


 
