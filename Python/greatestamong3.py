m,k,g=map(int,input().split())
if(m>k and m>g):
    print(m,"is greatest")
elif(k>m and k>g):
    print(k,"is greatest")
else:
    print(g,"is greatest")