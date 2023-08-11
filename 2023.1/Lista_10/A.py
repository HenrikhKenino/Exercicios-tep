"""
Website: AtCoder
Link: https://atcoder.jp/contests/abc103/tasks/abc103_a?lang=en
"""
num = list(map(int, input().split()))   #num = sorted(map(int, input().split()))
num.sort()
print((-num[0]+num[1])+(-num[1]+num[2]))
