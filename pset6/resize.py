from PIL import Image   # pillow
from sys import argv

if len(argv)!=4:
    exit("Usage: python resize.py n infile outfile")

n = int(argv[1])    # argv is a string
infile = argv[2]
outfile = argv[3]

inimage = Image.open(infile)
width, height = inimage.size
outimage = inimage.resize((width * n, height * n))

outimage.save(outfile)
