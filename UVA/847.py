
while True:
    try:
        n = int(input())
        stan = True
        p = 1
        while p < n:
            if stan:
                p *= 9
            else:
                p *= 2

            stan = not stan

        if not stan:
            print('Stan wins.')
        else:
            print('Ollie wins.')
    except:
        break
