## What is Web Scraping?
Web scraping, also known as web harvesting or web data extraction, is a type of data scraping that is used to extract information from websites. Using the Hypertext Transfer Protocol or a web browser, the web scraping software can directly access the World Wide Web. While web scraping can be done manually by a software user, the term usually refers to automated processes carried out with the assistance of a bot or web crawler. It is a type of copying in which specific data from the web is gathered and copied, typically into a central local database or spreadsheet for later retrieval or analysis.<br>
![](https://github.com/nakshatra-garg/winter-of-contributing/blob/Python/Python/Web_Scraping/images/web-scraping-process.png)

## Why use Web Scraping?
Web scraping is used to collect large information from websites. There are primarily two methods for extracting data from a website:
- Use the website's API (if it exists). Facebook, for example, has the Facebook Graph API, which allows for the retrieval of data posted on Facebook.
- Access the webpage's HTML and extract useful information/data from it. This method is known as web scraping, web harvesting, or web data extraction.

## Steps Involved in Web Scraping
- Send an HTTP request to the URL of the webpage you want to access. The server responds to the request by returning the HTML content of the webpage. For this task, we will use a third-party HTTP library for python-requests.
- Once we have accessed the HTML content, we are left with the task of parsing the data. Since most of the HTML data is nested, we cannot extract data simply through string processing. One needs a parser which can create a nested/tree structure of the HTML data. There are many HTML parser libraries available but the most advanced one is html5lib.
- Now, all we need to do is navigating and searching the parse tree that we created, i.e. tree traversal. For this task, we will be using another third-party python library, Beautiful Soup. It is a Python library for pulling data out of HTML and XML files.

## What is BeautifulSoup?
[Beautiful Soup](https://beautiful-soup-4.readthedocs.io/en/latest/) is a Python library for pulling data out of HTML and XML files.
It works with your favorite parser to provide idiomatic ways of navigating, searching, and modifying the parse tree. It commonly saves programmers hours or days of work.

### How to install BeautifulSoup
To install Beautifulsoup on Windows, Linux, or any operating system, one would need pip package. You can install bs4 using pip.
`pip install beautifulsoup4`


## Applications of Web Scraping
- **Price Comparison**: Services such as ParseHub use web scraping to collect data from online shopping websites and use it to compare the prices of products.
- **Email address gathering**: Many companies that use email as a medium for marketing, use web scraping to collect email ID and then send bulk emails.
- **Social Media Scraping**: Web scraping is used to collect data from Social Media websites such as Twitter to find out what’s trending.
- **Research and Development**: Web scraping is used to collect a large set of data (Statistics, General Information, Temperature, etc.) from websites, which are analyzed and used to carry out Surveys or for R&D.
- **Job listings**: Details regarding job openings, interviews are collected from different websites and then listed in one place so that it is easily accessible to the user.

## Conclusion
As the Internet has developed exponentially and organisations have become increasingly reliant on data, it is now a requirement to have access to the most up-to-date information on any given issue.
Data has become the foundation of all decision-making processes, whether in a for-profit or non-profit organisation. As a result, web scraping has found applications in almost every notable endeavour in modern times.
It is also becoming evident that those who employ online scraping tools creatively and advancedly will sprint ahead of others and obtain a competitive advantage.

## References
- [Implementing Web Scraping Using Beautiful Soup](https://www.geeksforgeeks.org/implementing-web-scraping-python-beautiful-soup/)
- [Web Scraping in Python](https://www.edureka.co/blog/web-scraping-with-python/)
- [Data Collection](https://github.com/ifrankandrade/data-collection)
- [Beautiful Soup](https://beautiful-soup-4.readthedocs.io/en/latest/)