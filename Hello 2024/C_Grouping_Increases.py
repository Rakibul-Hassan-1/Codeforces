def main():
    tc = int(input()) 
    for _ in range(tc):
        n = int(input())
        a = list(map(int, input().split()))

        x = float('inf')
        y = float('inf')
        cnt = 0

        for i in a:
            if x > y:
                x, y = y, x
            if i <= x:
                x = i
            elif i <= y:
                y = i
            else:
                x = i
                cnt += 1

        print(cnt)


if __name__ == "__main__":
    main()
