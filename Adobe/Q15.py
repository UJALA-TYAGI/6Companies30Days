s1 = input()
s2 = input()
if len(s1)==0 and len(s2)==0:
    print("")
elif len(s1)> len(s2):
    print (s1)
elif len(s2)>len(s1):
    print (s2)
else:
    l1 = s1.split(".")
    l2 = s2.split(".")
    for i in range(len(l1)):
        if int(l1[i])> int(l2[i]):
            print(s1)
            break
        elif int(l2[i])>int(l1[i]):
            print(s2)
            break
        else:
            continue
