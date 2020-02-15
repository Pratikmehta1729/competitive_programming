#Import libraries
import requests
from bs4 import BeautifulSoup

#Request URL
page = requests.get("https://www.sih.gov.in/sih2020PS")

#Fetch webpage
soup = BeautifulSoup(page.content,"html.parser")
print(soup.prettify())

f = open("demofile2.txt", "a")
f.write(page.content)
f.close()

