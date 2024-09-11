import pyttsx3
import speech_recognition as sr
import datetime
import wikipedia
import webbrowser
import os







def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("How can I help?")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-UK')
        print(f"User said: {query}\n")
    except Exception as e:
        print("Speak it again please...")
        return None
    return query.lower()


if __name__ == "__main__":
    greetUser()
    while True:
        query = takeCommand()

        if query is None:
            continue

        

        elif 'open youtube' in query:
            webbrowser.open("https://www.youtube.com")

        elif 'open google' in query:
            webbrowser.open("https://www.google.com")

        elif 'open university website' in query:
            webbrowser.open("http://giet.edu")

        elif 'open stack overflow' in query or 'open stackoverflow' in query:
            speak("Here you go to Stack Overflow. Happy coding!")
            webbrowser.open("https://stackoverflow.com")

        elif 'play music' in query:
            music_dir = 'A:\\MP3'  # Update with your music directory
            songs = os.listdir(music_dir)
            if songs:
                os.startfile(os.path.join(music_dir, songs[0]))

        elif 'the time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, the time is {strTime}")

        elif 'open browser' in query:
            codePath = r"C:\Program Files\Mozilla Firefox\firefox.exe"
            os.startfile(codePath)

        elif 'open git' in query:
            codePath = "C:\\Program Files\\Git\\git-bash.exe"
            os.startfile(codePath)

        elif 'quit' in query or 'shut' in query:
            speak("Thanks for giving me your time")
            exit()
