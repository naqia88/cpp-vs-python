class TextAnalyzer:
    def __init__(self, text):
        self._text = text   #protected-style

    def _count_vowels(self):
        vowels = "aeiouAEIOU"
        return sum(1 for c in self._text if c in vowels)

    def word_count(self):
        return len(self._text.split())

    def char_frequency(self):
        freq = {}
        for c in self._text:
            if c != " ":
                freq[c] = freq.get(c, 0) + 1

        print("\nCharacter Frequency:")
        for k, v in freq.items():
            print(k, ":", v)

    def analyze(self):
        print("\nText Length:", len(self._text))
        print("Word Count:", self.word_count())
        print("Vowel Count:", self._count_vowels())
        self.char_frequency()


text = input("Enter a sentence: ")
analyzer = TextAnalyzer(text)
analyzer.analyze()
