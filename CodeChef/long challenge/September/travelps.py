for i in range(int(input())):
    a,b,c=map(int,input().split())
    s=input()
    t=s.count('0')*b + s.count('1')*c
    print(t)
