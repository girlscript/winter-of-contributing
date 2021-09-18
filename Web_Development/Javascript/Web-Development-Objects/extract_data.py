# coding: utf8
import boto
from boto.s3.key import Key
from gzipstream import GzipStreamFile
import json
import warc
import csv
import requests
import zlib


def get_partial_warc_file(url):
    """
    we use the incredible gzipstreamfile module because of limitations with
    WARC Python module. Seriously, if the module won't have existed, this
    task would have been impossible. Thanks a lot to the creator

    https://github.com/commoncrawl/gzipstream

    return: warc.WARCFile instance
    """
    conn = boto.connect_s3(anon=True)
    pds = conn.get_bucket('aws-publicdatasets')
    # Start a connection to one of the WARC files
    k = Key(pds)
    k.key = url
    wf = warc.WARCFile(fileobj=GzipStreamFile(k))

    for num, record in enumerate(wf):
        try:
            print 'On Record {0}'.format(num)
            payload = record.payload.read()
            if payload[0] == "{":
                r = json.loads(payload)
                description = ''
                title = r['Envelope']['Payload-Metadata']['HTTP-Response-Metadata']['HTML-Metadata']['Head']['Title'].encode('utf-8')
                for x in r['Envelope']['Payload-Metadata']['HTTP-Response-Metadata']['HTML-Metadata']['Head']['Metas']:
                    if x['name'] == 'description':
                        description = x['content']
                uri = r['Envelope']['WARC-Header-Metadata']['WARC-Target-URI']
                with open('output.csv', 'ab') as f:
                    writer = csv.writer(f)
                    writer.writerow([title, description, uri])
        except:
            pass


def get_urls():
    url = "https://aws-publicdatasets.s3.amazonaws.com/common-crawl/crawl-data/CC-MAIN-2016-07/wat.paths.gz"
    try:
        response = requests.get(url)
    except Exception as e:
        print(e)

    data = zlib.decompress(response.content, zlib.MAX_WBITS|32)

    return data.split("\n")

print("Enter Last Known URL from urls.csv or Leave Blank if want to start from 0")
inurl = str(raw_input())
urls = get_urls()

if inurl == '':
    idx = 0
else:
    idx = urls.index(inurl)

for url in urls[idx:]:
    get_partial_warc_file(url=url)
    with open('urls.csv', 'ab') as f:
        writer = csv.writer(f)
        writer.writerow([url])
