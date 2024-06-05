import re
import pandas as pd
import matplotlib.pyplot as plt
import emoji
file = open(r'./WhatsApp Chat with Manish AG.txt',mode='r',encoding="utf8")
data = file.read()
file.close()
data