m,k,g=map(int,input().split())
if m<k and m<g:
    if k<g:
        print(k)
    else:
        print(g)
elif k<m and k<g:
    if m<g:
        print(m)
    else:
        print(g)
elif g<m and g<k:
    if m<k:
        print(m)
    else:
        print(k)
