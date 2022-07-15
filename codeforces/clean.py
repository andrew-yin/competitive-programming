import os

# rename
files = os.listdir('.')
for f in files:
    name_ext = f.split('.', 1)
    name, ext = name_ext[0], name_ext[1]
    if ext == 'bin':
        os.remove(f)
        continue
    newname = (name.upper() if ext == 'cpp' else name)  + '.' + ext.lower()
    if newname == f:
        continue
    if newname in files:
        print( "error: %s already exists" % newname )
    os.rename(f, newname)

