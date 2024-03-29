def solve():
    st = input()
    i = int(st[:2])
    if i > 12:
        i = i - 12
        j = str(i)
        if i <=9:
        	print('0' + j + st[2:] + " " + "PM")
        else:
        	print( j + st[2:] + " " + "PM")	
    elif i == 0:
        print("12" + st[2:] + " " + "AM")
    elif i == 12:
        print("12" + st[2:] + " " + "PM")
    else:
        print(st + " " + "AM")
 
def main():
    tc = int(input())
    while tc > 0:
        solve()
        tc -= 1
 
main() 