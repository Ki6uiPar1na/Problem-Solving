from collections import Counter
import string

def process_text(text):
    # Remove punctuation and convert text to lowercase
    text = text.translate(str.maketrans('', '', string.punctuation)).lower()
    words = text.split()
    return words

def word_frequency(text):
    words = process_text(text)
    word_counts = Counter(words)
    return word_counts

def main():
    input_text = """
    This is a sample text. It contains some words, and it repeats some words.
    Counting the frequency of words can be interesting.
    """

    word_counts = word_frequency(input_text)

    print("Word Frequency Counter\n")
    for word, count in word_counts.items():
        print(f"{word}: {count}")

if __name__ == "__main__":
    main()
