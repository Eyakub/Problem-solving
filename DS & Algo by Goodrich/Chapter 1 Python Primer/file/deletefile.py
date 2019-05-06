import os
if os.path.exists('remove.text'):
    os.remove('remove.text')
else:
    print('The file does not exist')


# os.rmdir('folderName') # remove the folder
