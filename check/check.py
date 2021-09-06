from os import system

while True:
    system("python3 randgen.py")
    system("true.exe < ../hack.txt > true.txt")
    system("false.exe < ../hack.txt > false.txt")
    if system("fc true.txt false.txt"):
        system("pause")
