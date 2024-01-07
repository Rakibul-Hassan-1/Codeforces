def main():
    tc = int(input()) 
    for _ in range(tc):
      n = int(input())
      s= input()
      plusCount = s.count('+')
      minusCount = s.count('-')
      ans = abs(2*min(plusCount,minusCount)-n)
      print(ans)
if __name__ == "__main__":
    main()

