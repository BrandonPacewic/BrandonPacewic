def write_line(fname: str, line: str, target_line: int) -> None:
    def _clear_file() -> None:
        file.truncate(0)
        file.seek(0)

    with open(fname, 'r+') as file:
        lines = file.readlines()
        lines[target_line] = line
        _clear_file()
        file.writelines(lines)


def main():
    with open('README.md', 'r') as file:
        line = file.readlines()[4]

        if line.count('=') < 20:
            line = f'{line[:len(line)-1]}\=\n'
        else:
            line = '\=\n'

    write_line('README.md', line, 4)


if __name__ == '__main__':
    main()