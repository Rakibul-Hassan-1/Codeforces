def main():
    tc = int(input()) 
    for _ in range(tc):
      x, y = map(int, input().split())
    #   print(x,y)
      n = x+y
      if n%2==0:
         print('Bob')
      else:
           print('Alice')

if __name__ == "__main__":
    main()

