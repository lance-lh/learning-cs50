from sys import argv

if len(argv)==2:
    print("Hello, ", argv[1])
else:
    print("Hello, world")  # the case happens when python argv0.py or python argv.py plus plus plus...
                            # plus plus separated by space

'''
no count    0         1     2   ...
python  argv0.py    lance  this
'''