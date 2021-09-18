#! /usr/bin/env python2
# -*- coding: UTF-8 -*-
# Usage:
#
# ./gettwitter.py <url>
import re
from sys import argv, exit
import urllib
pin1 = open('websites.txt','r')
lines1 = pin1.readlines();
RE_FACEBOOK1= r'//www.facebook\.com/(?:#!/)?(\w+)'
RE_FACEBOOK2= r'//facebook\.com/(?:#!/)?(\w+)'
RE_TWITTER = r'//twitter\.com/(?:#!/)?(\w+)'
BLACKLIST = [ 'twitterapi' ]
class FakeFirefoxURLopener(urllib.FancyURLopener):
        version = 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10.9; rv:25.0)' \
                + ' Gecko/20100101 Firefox/25.0'
def main():
        urllib._urlopener = FakeFirefoxURLopener()
	for line in lines1:
		values1 = re.split(',', line);
        	try:
            		page = urllib.urlopen('http://www.'+values1[0])
        	except IOError as e:
            		print e
            		exit(1)
        	for line in page.readlines():
			#print line
            		for m in re.finditer(RE_TWITTER, line):
                		if m:
                    			name = m.group(1)
                    			if name not in BLACKLIST:
                        			print "twitter", values1[0], name
            		for m in re.finditer(RE_FACEBOOK1, line):
                		if m:
                    			name = m.group(1)
                    			if name not in BLACKLIST:
                        			print "facebook1", values1[0], name
            		for m in re.finditer(RE_FACEBOOK2, line):
                		if m:
                    			name = m.group(1)
                    			if name not in BLACKLIST:
                        			print "facebook2", values1[0], name
if __name__ == '__main__':
        main()
