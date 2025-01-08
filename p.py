import tkinter as tk
from tkinter import ttk

def show_activity(event):
    selected_time = time_combobox.get()
    activity = schedule.get(selected_time, "No activity found.")
    activity_label.config(text=activity)

# Schedule data
data = [
    ("06:30 - 07:30", "Wake up, Fajr prayer, Quran reading, daily goals"),
    ("07:30 - 08:00", "English learning: Vocabulary and review"),
    ("08:00 - 08:30", "Breakfast"),
    ("08:30 - 10:30", "HTB Academy: Theory and practical exercises"),
    ("10:30 - 10:35", "Optional Duha prayer and short break"),
    ("10:35 - 13:35", "School 42: Focus on projects and challenges"),
    ("13:35 - 14:15", "Dhuhr prayer, lunch, and short rest"),
    ("14:15 - 17:15", "School 42: Continue lessons and projects"),
    ("17:15 - 17:30", "Asr prayer and short break"),
    ("17:30 - 18:30", "English learning: Text analysis and exercises"),
    ("18:30 - 19:00", "Break: Reading or light activity"),
    ("19:00 - 19:30", "Maghrib prayer and dinner"),
    ("19:30 - 21:30", "HTB Academy: Labs or challenges"),
    ("21:30 - 21:45", "Isha prayer and short rest"),
    ("21:45 - 22:45", "English learning: Daily writing and grammar review"),
    ("22:45 - 23:00", "Review goals for the day and set goals for tomorrow"),
]

# Convert data to dictionary for easy access
schedule = dict(data)

# Create the main window
root = tk.Tk()
root.title("Daily Schedule")

# Dropdown (Combobox)
time_label = tk.Label(root, text="Select Time:")
time_label.pack(pady=5)

time_combobox = ttk.Combobox(root, values=list(schedule.keys()))
time_combobox.pack(pady=5)

time_combobox.bind("<<ComboboxSelected>>", show_activity)

# Label to display activity
activity_label = tk.Label(root, text="", wraplength=400, justify="center", font=("Arial", 12))
activity_label.pack(pady=20)

# Run the application
root.mainloop()
