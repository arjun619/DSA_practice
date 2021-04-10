def numberfinder(str1):
    n = len(str1)
    output = ""
    arr=["2","22","222","3", "33", "333",
       "4", "44", "444",
       "5", "55", "555",
       "6", "66", "666",
       "7", "77", "777", "7777",
       "8", "88", "888",
       "9", "99", "999", "9999" ]
    for i in range(n):
        if(str1[i] == ' '):
            output = output + "0"
        else:  
            position = ord(str1[i]) - ord('A')
            output = output + arr[position]     
    return output

print(numberfinder("HELLO"))
