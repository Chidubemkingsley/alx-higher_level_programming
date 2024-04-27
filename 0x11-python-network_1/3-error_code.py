#!/usr/bin/python3
"""
[2;2R[>77;30604;0c]10;rgb:0000/ffff/0000]11;rgb:0000/4040/0000script that takes in a URL, sends a request to the URL and displays the
body of the response (decoded in utf-8).
You have to manage urllib.error.HTTPError exceptions and
print: Error code: followed by the HTTP status code.
"""
import urllib.request
import urllib.error
import sys


if __name__ == "__main__":
    url = sys.argv[1]
    try:
        with urllib.request.urlopen(url) as response:
            response_text = response.read().decode("utf-8")
            print(response_text)
    except urllib.error.HTTPError as e:
        print("Error code: {}".format(e.code))