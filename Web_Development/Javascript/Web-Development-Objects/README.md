# Automatic-Website-Categorizers

These programs are designed to categorize specified websites.

# Title Searcher
(Powered by Yandex.Translate: http://translate.yandex.com/ )

Download  [GoogleScraper](https://github.com/NikolaiT/GoogleScraper):

    pip3 install GoogleScraper
(GoogleScraper requires Python3.)

Open a command prompt and enter the following:

    GoogleScraper -m http -s "bing" --keyword-file websites.txt > output.txt    
 (You will need to have a file called websites.txt with a list of websites that you want to search.)    
Run titles_searcher.py that output.txt file:

    python2.7 titles_searcher.py output.txt output_from_extract.txt
(The first entry in the command line after 'titles_searcher.py' should be the name of the input file that you are processing, which is the output from the desired GoogleScraper run. The entry after that should be the name of the output file that you want to create. You will need to put the file lists.py in the same directory as titles_searcher.py.)

# Common Crawl Title Searcher
(Powered by Yandex.Translate: http://translate.yandex.com/ )

Open a command prompt and enter the following:

    python2.7 extract_data.py
    
(This will find the titles of webpages in Common Crawl.) 
Open a command prompt and enter the following:

    python2.7 titles_searcher_common.py output.txt
(The first entry in the command line after 'titles_searcher.py' should be the name of the output file that you want to create.) 

# Description Searcher
(Powered by Yandex.Translate: http://translate.yandex.com/ )

Download the prerequisites:

    pip2 install BeautifulSoup4
    pip2 install request
    
Create a textfile called websites.txt with all of the websites that you want to search for. If you want to create a textfile of websites with a different filenmae, update the file common.py so that it references the correct filename.  Then run the file description_searcher.py.

    python2.7 description_searcher.py

This will output results in the form: website address category. 

# Aggregator Identifier

Create a textfile called websites.txt with all of the websites that you want to search. Then run the file aggregators.py on that. You will need to install BeautifulSoup and GoogleScraper as described above for the Title Searcher program and Description Searcher Program. This program will output two lists, one list will be the list of sites that were identified to be aggregators and the other list will be the list of sites that were not identified to be aggregators.

# Twitter Handle/Facebook Page Extractor
Create a textfile called websites.txt with all of the websites that you want to search. Then run the file twitterandfacebook.py on that. This program wilAl output the twitter handles and facebook pages that were found for the websites that were searched. At this point, some minor editing of the output is required.

***************************************************************************thankyou**********************************************************************************************
