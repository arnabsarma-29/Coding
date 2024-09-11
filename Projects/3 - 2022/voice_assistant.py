import wolframalpha
import pyttsx3
import speech_recognition as sr
import datetime
import wikipedia
import webbrowser
import pyjokes
import time
from urllib.request import urlopen

def sptext():
        recognizer=sr.Recognizer()
        with sr.Microphone() as source:
                print("Listening...")
                recognizer.adjust_for_ambient_noise(source)
                audio = recognizer.listen(source)
                try:
                        print("recognizing...")
                        data = recognizer.recognize_google(audio)
                        print(data)
                        return data
                except sr.UnknownValueError:
                        print("Not Understand")

def speechtx(x):
        engine = pyttsx3.init()
        voices = engine.getProperty('voices')
        engine.setProperty('voice',voices[1].id)
        rate = engine.getProperty('rate')
        engine.setProperty('rate',150)
        engine.say(x)
        engine.runAndWait()

if __name__ == '__main__':
        
        if "hello" in sptext().lower() :
                while True :
                        data1=sptext().lower()
                        if "your name" in data1:
                                name = "my name is kek"
                                speechtx(name)
                        elif "how old are you" in data1:
                                age = "i am 1 month old"
                                speechtx(age)
                        elif "what is your age" in data1:
                                age = "i am 1 month old"
                                speechtx(age)
                        elif 'now time' in data1:
                                time = datetime.datetime.now().strftime("%I%M%p")
                                speechtx (time)
                        elif 'youtube' in data1:
                                webbrowser.open("www.youtube.com")
                        elif 'google' in data1:
                                webbrowser.open("www.google.com")
                        elif 'wiki' in data1:
                                webbrowser.open("https://www.wikipedia.org/")
                        elif "joke" in data1:
                                joke_1 = pyjokes.get_joke(language="en",category="neutral")
                                print(joke_1)
                                speechtx(joke_1)
                        elif 'how are you' in data1:
                                        speechtx("I am fine, Thank you")
                                        speechtx("How are you,Sir")
                        elif 'fine' in data1 or "good" in data1:
                                        speechtx("It's good to know that your fine")
                        elif "change my name to" in data1:
                                data1 = data1.replace("change my name to", "")
                                name = data1
                        elif "change name" in data1:
                                speechtx("What would you like to call me, Sir ")
                                name = sptext()
                                speechtx("Thanks for naming me")
                        elif "what's your name" in data1 or "What is your name" in data1:
                                speechtx("My friends call me")
                                speechtx(name)
                                print("My friends call me", name)
                        elif "calculate" in data1:
                                app_id = "Wolframalpha api id"
                                client = wolframalpha.Client(app_id)
                                index = data1.lower().split().index('calculate')
                                data1 = data1.split()[index + 1:]
                                res = client.data1(' '.join(data1))
                                answer = next(res.results).text
                                print("The answer is " + answer)
                                speechtx("The answer is " + answer)                    
                        time.sleep(5)
        else:
                print("Thanks")