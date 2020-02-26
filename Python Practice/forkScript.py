import os

def spork():
	parentID = os.getpid()
	print("Before fork. Parent ID: " + str(os.getpid()))
	os.fork()
	print("After fork pid: " + str(os.getpid()))
	if(os.getpid() != parentID):
		os._exit(1)
	print("After exit pid: " + str(os.getpid()))

