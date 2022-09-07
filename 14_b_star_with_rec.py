def pattern(n, num):
    if n > num: 
        return
    elif n == num:
        print("*"*n)
        return
    print("*"*n)
    pattern(n+1, num)
    print("*"*n)


if __name__ == "__main__":
    pattern(1, 10)