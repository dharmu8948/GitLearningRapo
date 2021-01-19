# just print manually by using p5.py url
import requests

url = "http://127.0.0.1:5000/"
r = requests.get(url)
print(r.text)