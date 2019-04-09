res = '1'
# print(res)
for i in range(5):
    temp = res
    res = ''
    ch = temp[0]
    count = 0
    for c in temp:
        if c == ch:
            count += 1
        else:
            res += str(count) + ch
            ch = c
            count = 1
        if(count > 10):
            print('---------')
    else:
        if count == :
            res += str(count) + c
    print(i, res)
# return res

