"""
Size: 7 x 21 
---------.|.---------
------.|..|..|.------
---.|..|..|..|..|.---
-------WELCOME-------
---.|..|..|..|..|.---
------.|..|..|.------
---------.|.---------
"""
def designer_door_mate(m, n):
    dotStick = '.|.'
    dash = '-'
    wel = 'WELCOME'
    for i in range(1, m, 2):
        print((dotStick*i).center(n, dash))
    print(wel.center(n, dash))
    for i in range(m-2, -1, -2):
        print((dotStick*i).center(n, dash))

    
if __name__ == "__main__":
    m, n = input().split()
    designer_door_mate(int(m), int(n))