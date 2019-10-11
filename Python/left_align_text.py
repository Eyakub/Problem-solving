# line can contain max 16 character
# after that rest text will print from next line

def leftTextAligh(text, lineLength):
  text_len = len(text)
  print('text-len...', text_len)
  list_text = text.split(' ')
  outputText = list_text[0]
  totalChar = len(outputText)
  for i in range(1, len(list_text)):
    totalChar = totalChar + len(list_text[i]) + 1
    if(totalChar <= lineLength):
      outputText += " "
      outputText += list_text[i]
    else:
      outputText += "\n"
      totalChar = 0
    
  print(outputText)
    

leftTextAligh('hi there its a test text to do some right align task', 16)