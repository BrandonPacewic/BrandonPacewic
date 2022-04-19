
def main():
    with open('README.md', 'r') as file:
        # get the 5th line
        line = file.readlines()[4]

        # if line is less than length 20 add a '=' charater just before the '\n' char at the end else clear it to '\n'
        if len(line) < 20:
            line = f'{line[:len(line)-1]}=\n'
        else:
            line = '\n'



if __name__ == '__main__':
    main()