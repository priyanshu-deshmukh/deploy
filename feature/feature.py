#using bag of words

from sklearn.feature_extraction.text import CountVectorizer

texts = [
    "This is a sample sentence",
    "This sentence is another example"
]

vectorizer = CountVectorizer()
X = vectorizer.fit_transform(texts)

print("Vocabulary:", vectorizer.get_feature_names_out())
print("Feature matrix:\n", X.toarray())

#using tf-idf
from sklearn.feature_extraction.text import TfidfVectorizer

texts = [
    "This is a sample sentence",
    "This sentence is another example"
]

vectorizer = TfidfVectorizer()
X = vectorizer.fit_transform(texts)

print("Vocabulary:", vectorizer.get_feature_names_out())
print("TF-IDF matrix:\n", X.toarray())

#manual analysis word count
from collections import Counter
import re

text = "This is a sample sentence. This sentence is simple."
words = re.findall(r'\b\w+\b', text.lower())

freq = Counter(words)
print("Word Frequencies:", freq)
