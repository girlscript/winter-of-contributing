import sys

descr_filename = 'websites.txt'

def get_filename():
	filename = descr_filename
	if len(sys.argv) == 2:
		filename = sys.argv[1]
	return filename

def read_lines_from_file( filename ):
	try:
		with open(filename,'r') as f:
			return f.readlines()

	except Exception as e:
		print "error opening file({0}): {1}".format(filename, str(e))
		sys.exit()
