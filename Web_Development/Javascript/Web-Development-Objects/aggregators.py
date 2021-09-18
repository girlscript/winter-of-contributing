import requests
#from beautifulsoup4 import BeautifulSoup
from bs4 import BeautifulSoup
import re
import os

urls=[]
agg_list=[]
not_agg_list=[]

pin1 = open('websites.txt','r')
lines1 = pin1.readlines();

for line in lines1: 
	values1 = re.split('', line);
	values1[0] = values1[0].replace("\n", "")
	urls.append('http://www.'+values1[0])
	#print (urls)

# print (urls)


for site in range(0,len(urls)):
	url=urls[site]
	agg_counts=[]

	soup = BeautifulSoup(requests.get(url).text, "html.parser")

	target = open('o.txt', 'w')
	target.write(str(soup))
	target.close()

	pin1 = open('o.txt','r')
	lines1 = pin1.readlines();
	on=0
	start=0
	text=[]
	text_master=[]
	a=0
	for line in lines1: 

		values1 = re.split('\s|=|"', line);

		for i in range(0,len(values1)):

			if values1[i]=='<a' and values1[i+1]=='href':
				on=1
			if len(values1[i])>1:
				if values1[i][0]=='>' and on==1:
					start=1
			if len(values1[i])>1:
				if values1[i][1]=='<':
					on=0
					start=0 
			if start==1:
				text.append(values1[i])

				if len(values1[i])>0:
					if values1[i][len(values1[i])-2]=='a' and values1[i][len(values1[i])-1]=='>':
						values1[i]=values1[i][:-4]
						del text[-1]
						text.append(values1[i])
						temp=text[0]
						temp=temp[1:]
						del text[0]
						text.insert(0,temp)
						on=0
						start=0
					
						if len(text)>8:
							text_master.append(text)
						text=[]
						break;
	s=" "
	first_links=[]
	first_titles=[]
	strings=[]
	for i in range(0, len(text_master)-1):
		first_title=[]
		string=' '.join(text_master[i])
		strings.append(string)
		os.system('GoogleScraper -m http -s "google" --keyword "'+str(string)+'" > output'+str(i)+'.txt')
		count=0
		on=0
		on2=0
		temp=[]
		target = open('output_from_search10.txt', 'w')
		pin1 = open('output'+str(i)+'.txt','r')
		lines1 = pin1.readlines();


		for line in lines1:

			values1 = re.split('\s+', line);
#			print (values1)

			if values1[1]=="'query':":

				on=1
				count=0

#			if on==1 and values1[1]=="'snippet':":

				on=2

			if on==2:

				for i in range(0, len(values1)):

					if values1[i]=="'link':":
						# print(values1)
						first_links.append(values1[i+1])
						# break;

				for i in range(0, len(values1)):

					if values1[i]=="'visible_link'":
						break;

					if on==3:
						first_title.append(values1[i])

					if values1[i]=="'title':":
						on=3

		first_titles.append(first_title)

#print ("first links",first_links)
#print ("first titles",first_titles)
#print ("strings",strings)
#print ("urls",urls)


	agg_count=0
	for i in range(0, len(first_titles)):

		titled=s.join(first_titles[i])
		titled = titled.replace("'", "")
		titled = titled.replace("  ", " ")
		#print (titled)
		string_compare=strings[i]+" "
		string_compare=string_compare.replace("'", "")
		string_compare=string_compare.replace("  ", " ")
		#print (string_compare)
		if (string_compare in titled) or (titled in string_compare):
			#print (string_compare,titled)

			agg_count=agg_count+1

	agg_counts.append(agg_count)
	#print ("ac",agg_counts)

	for i in range(0, len(agg_counts)):

		if agg_counts[i]>2:

			agg_list.append(url)

		if agg_counts[i]<=2:

			not_agg_list.append(url)

print ("agg_list",agg_list)
print ("not_agg_list",not_agg_list)

