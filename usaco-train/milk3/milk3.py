"""
ID: andrew8
LANG: PYTHON3
TASK: milk3
"""
import sys

def main():
    with open("milk3.in", 'r') as sys.stdin:
        a,b,c = tuple(map(int,sys.stdin.readline().split()))

    def pouredAB(state):
        if state[0] + state[1] <= b:
            return (0, state[0] + state[1], state[2])
        else:
            return (state[0] - (b - state[1]), b, state[2])

    def pouredBA(state):
        if state[0] + state[1] <= a:
            return (state[0] + state[1], 0, state[2])
        else:
            return (a, state[1] - (a - state[0]), state[2])

    def pouredAC(state):
        if state[0] + state[2] <= c:
            return (0, state[1], state[0] + state[2])
        else:
            return (state[0] - (c - state[2]), state[1], c)

    def pouredCA(state):
        if state[0] + state[2] <= a:
            return (state[0] + state[2], state[1], 0)
        else:
            return (a, state[1], state[2] - (a - state[0]))

    def pouredBC(state):
        if state[1] + state[2] <= c:
            return (state[0], 0, state[1] + state[2])
        else:
            return (state[0], state[1] - (c - state[2]), c)

    def pouredCB(state):
        if state[1] + state[2] <= b:
            return (state[0], state[1] + state[2], 0)
        else:
            return (state[0], b, state[2] - (b - state[1]))

    t = []
    states = set()
    state = (0,0,c)
    states.add(state)

    def solve(state):
        if state[0] == 0:
            t.append(state[2])

        # pour A to B
        if not (state[0] == 0 or state[1] == b):
            next_state = pouredAB(state)
            if next_state not in states:
                states.add(next_state)
                solve(next_state)
        # pour B to A
        if not (state[1] == 0 or state[0] == a):
            next_state = pouredBA(state)
            if next_state not in states:
                states.add(next_state)
                solve(next_state)
        # pour A to C
        if not (state[0] == 0 or state[2] == c):
            next_state = pouredAC(state)
            if next_state not in states:
                states.add(next_state)
                solve(next_state)
        # pour C to A
        if not (state[2] == 0 or state[0] == a):
            next_state = pouredCA(state)
            if next_state not in states:
                states.add(next_state)
                solve(next_state)
        # pour B to C
        if not (state[1] == 0 or state[2] == c):
            next_state = pouredBC(state)
            if next_state not in states:
                states.add(next_state)
                solve(next_state)
        # pour C to B
        if not (state[2] == 0 or state[1] == b):
            next_state = pouredCB(state)
            if next_state not in states:
                states.add(next_state)
                solve(next_state)
    
    solve(state)
    t.sort()
    
    with open("milk3.out" , 'w') as sys.stdout:
        sys.stdout.write(" ".join([str(i) for i in t]) + "\n")


if __name__ == "__main__":
    main()