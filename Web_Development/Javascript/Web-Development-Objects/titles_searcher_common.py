# -*- coding: utf-8 -*-
import re
import sys
import common
import csv
from lists import keys_ads
from lists import keys_commerce
from lists import keys_search
from lists import keys_adult
from lists import keys_news
from lists import keys_service
from lists import keys_platform

###############

counts_ads=[]

counts_commerce=[]

counts_search=[]

counts_adult=[]

counts_news=[]

counts_service=[]

counts_platform=[]

for z in range(0, len(keys_ads)):

			counts_ads.append(0)

for z in range(0, len(keys_commerce)):

			counts_commerce.append(0)

for z in range(0, len(keys_search)):

			counts_search.append(0)

for z in range(0, len(keys_adult)):

			counts_adult.append(0)

for z in range(0, len(keys_news)):

			counts_news.append(0)

for z in range(0, len(keys_service)):

			counts_service.append(0)

for z in range(0, len(keys_platform)):

			counts_platform.append(0)

count=0
on=0
on2=0
temp=[]
#################### Read in data from Common Crawl Search
f = open('output_test.csv')
csv_f = csv.reader(f)

titles=[]
descriptions=[]
websites=[]

for row in csv_f:
	websites.append(row[2])
	descriptions.append(row[1])
	titles.append(row[0])


filename2 = sys.argv[1]
######################
#filename2='outttt2.txt'

target = open(filename2, 'w')

for q in range(0, len(titles)):
				nothing=1

				values1 = re.split('\s+', titles[q]);
				for i in range(0, len(values1)):
					temp.append(values1[i])

				#print "IM TEMP", titles[q]
				#for a in range(0, len(temp)):
				#	print temp[a]
				for j in range(0, len(keys_news)):

					for k in range(0, len(temp)):

						if temp[k]==keys_news[j] and nothing!=0:

							counts_news[j]=counts_news[j]+1
							target.write(str(websites[q]))
							target.write(' news')
							nothing=0



###############

###############

				for j in range(0, len(keys_ads)):

					for k in range(0, len(temp)):

						if temp[k]==keys_ads[j] and nothing!=0:

							counts_ads[j]=counts_ads[j]+1
							target.write(str(websites[q]))
							target.write(' ads ')
							nothing=0


###############

###############

				for j in range(0, len(keys_commerce)):

					for k in range(0, len(temp)):

						if temp[k]==keys_commerce[j] and nothing!=0:

							counts_commerce[j]=counts_commerce[j]+1
							target.write(str(websites[q]))
							target.write(' commerce ')
							nothing=0



###############

###############

				for j in range(0, len(keys_search)):

					for k in range(0, len(temp)):

						if temp[k]==keys_search[j] and nothing!=0:

							counts_search[j]=counts_search[j]+1
							target.write(str(websites[q]))
							target.write(' search ')
							nothing=0



###############

###############

				for j in range(0, len(keys_adult)):

					for k in range(0, len(temp)):

						if temp[k]==keys_adult[j] and nothing!=0:

							counts_adult[j]=counts_adult[j]+1
							target.write(str(websites[q]))
							target.write(' adult ')
							nothing=0



###############


###############

				for j in range(0, len(keys_service)):

					for k in range(0, len(temp)):

						if temp[k]==keys_service[j] and nothing!=0:

							counts_service[j]=counts_service[j]+1
							target.write(str(websites[q]))
							target.write(' service')
							nothing=0



###############

###############

				for j in range(0, len(keys_platform)):

					for k in range(0, len(temp)):

						if temp[k]==keys_platform[j] and nothing!=0:

							counts_platform[j]=counts_platform[j]+1
							target.write(str(websites[q]))
							target.write(' platforms')
							nothing=0

########################

				if nothing==1:
					target.write(str(websites[q]))
					target.write(' nothing')

###############
				target.write("\n")
				temp=[]

###############



###########################################################








