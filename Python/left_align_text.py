# line can contain max 16 character
# after that rest text will print from next line

def leftTextAligh(text, lineLength):
  text_len = len(text)
  print('text-len...', text_len)
  list_text = text.split(' ')
  outputText = list_text[0] + ' '
  totalChar = len(outputText)
  totalSpace = 1
  for i in range(1, len(list_text)):
    totalChar = totalChar + len(list_text[i]) + 1
    print('totalChar..', totalChar)
    if(totalChar <= lineLength):
      outputText += list_text[i]
      outputText += " "
      totalSpace += 1
    else:
      outputText += "\n"
      totalChar = 0
    
  print(outputText)


def rightTextAlign(text, lineLength):
  text_len = len(text)
  print('text-len...', text_len)
  list_text = text.split(' ')
  outputText = list_text[0]
  totalChar = len(outputText)
  everyLineSpaceLeft = 0

  for i in range(1, len(list_text)):
    totalChar = totalChar + len(list_text[i]) + 1
    if totalChar <= lineLength:
      everyLineSpaceLeft += 1
      for j in range(everyLineSpaceLeft):
        outputText += ' '
      outputText += " "
      outputText += list_text[i]
      print('space for every line...', everyLineSpaceLeft)
  

  print(outputText)
    

rightTextAlign('hi there its a test text to do some right align task', 16)