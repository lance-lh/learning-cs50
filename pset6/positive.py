
def main():
    i = get_positive_num("positive num is: ")
    print(i)

def get_positive_num(prompt):
    while True:
        n = int(input(prompt))
        if n > 0:
            break
    return n

if __name__ == "__main__":
    main()