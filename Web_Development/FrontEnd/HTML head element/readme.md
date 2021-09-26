# HTML head element

The <head> element primarily is the container for all the head elements, which provide extra information about the document (metadata), or reference to other resources that are required for the document to display or behave correctly in a web browser.

The HTML <head> element is a container for the following elements: <title>, <style>, <meta>, <link> and <script>.

## HTML title element

The <title> element defines the title of the document.

 The title of the document may be used for different purposes. For example:

1.  To display a title in the browser title bar and in the task bar.
2.  To provide a title for the page when it is added to favorites or bookmarked.
3.  To displays a title for the page in search-engine results.

>>> Let's see an example :

	<!DOCTYPE html>
	<html>
	<html lang="en">
		<head>
			<title>A simple HTML document</title>
		</head>
		<body>
			<p>Hello World!</p>
		</body>
	</html>

## HTML style element

The <style> element is used to define embedded style information for an HTML document. The style rules inside the <style> element specify how HTML elements render in a browser.

>>> Let's see an example :

	<!DOCTYPE html>
	<html>
	<html lang="en">
		<head>
			<title>Embedding Style Sheets</title>
			<style>
				body { background-color: blue; }
				h1 { color: yellow; }
				p { color: black; }
			</style>
		</head>
		<body>
			<h1>Heading</h1>
			<p>The styles of this HTML document are defined inside the style element.</p>
		</body>
	</html>
	

## HTML meta Element

The <meta> element provides metadata about the HTML document. Metadata is a set of data that describes and gives information about other data.

>>> Let's see an example :

	<!DOCTYPE html>
	<html lang="en">
		<head>
			<title>Defining Metadata</title>
			<meta charset="utf-8">
			<meta name="author" content="John Smith">
		</head>
		<body>
			<h1>Defining metadata</h1>
			<p>Meta tags contain information about a web page. It is not visible in the browser.</p>
		</body>
	</html>
	

## HTML script Element

The <script> element is used to define client-side script, such as JavaScript in HTML documents.

>>> Let's see an example :

	<!DOCTYPE html>
	<html lang="en">
		<head>
			<title>Adding JavaScript</title>
			<script>
				document.write("<h1>Hello World!</h1>") 
			</script>
		</head>
		<body>
			<p>The above heading is inserted in this document by JavaScript.</p>
		</body>
	</html>
