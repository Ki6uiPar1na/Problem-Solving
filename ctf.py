
from pwn import *
from collections import Counter

if _name_ == "_main_":
    p = remote('195.238.123.170', 7003)
    # p = process("problem.py")
    print(p.recvline().decode())
    print(p.recvline().decode())
    print(p.recvline().decode())
    for _ in range(1000):
       
        generated_string = p.recvline().decode().strip()
        print(f"Generated string: {generated_string}")

        # Count occurrences of each character
        char_counts = Counter(generated_string)

        # Find the most and least occurring characters
        most_occurred_char = char_counts.most_common(1)[0][0]
        least_occurred_char = char_counts.most_common()[-1][0]

        # Send the answers to the server
        p.sendline(most_occurred_char.encode())
        p.sendline(least_occurred_char.encode())

        # Receive the result
        result = p.recvline().decode()
        print(most_occurred_char,least_occurred_char,result)
       
    print(p.recv().decode())