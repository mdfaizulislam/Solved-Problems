testCase = int(input())
for i in range(0,testCase):
    st=[int(elements) for elements in input()]
    #print(st)
    freq = [st.count(elements) for elements in range(1,10)]
    #print(freq)
    total=0
    for elements in range(9):
        total+=freq[elements]*(elements+1)

    allowed_move = freq[2]+freq[5]+freq[8]

    s_win = True

    if not total%3:
        if not allowed_move%2:
            s_win = False
    elif total%3 == 1:
        if freq[0] or freq[3] or freq[6]:
            if allowed_move%2:
                s_win = False
        else:
            s_win = False
    else:
        if freq[1] or freq[4] or freq[7]:
            if allowed_move%2:
                s_win = False
        else:
            s_win = False

    if s_win:
        print('Case '+str(i+1)+':'+' S')
    else:
        print('Case ' + str(i + 1) + ':' + ' T')
