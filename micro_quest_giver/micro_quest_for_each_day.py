import datetime
import json
import os
import random

QUEST_POOL = {
    "Fitness": [
        "Do 20 push-ups right now.",
        "Go for a brisk 15-minute walk outside."
    ],
    "Learning": [
        "Do Math for 1 hour.",
        "Do any due school work."
    ],
    "Mindfulness": [
        "Drink a full glass of water.",
        "Philosophize your thinking."
    ]
}

DATA_FILE = "daily_quest_state.json"

def load_data():
    # loads already saved data so it doesnt give you the same quest again
    if os.path.exists(DATA_FILE):
        with open(DATA_FILE, "r") as f:
             try:
                 return json.load(f)
             except json.JSONDecodeError :
                 return None
    return None  

def save_data(date_str, category, quest):
    # makes new file and refreshes previous json 
    data = {"date": date_str, "category": category, "quest" : quest}
    with open(DATA_FILE, "w") as f:
        json.dump(data, f, indent = 4)  

def get_quest():
    #gives the quests
    today_str = datetime.date.today().isoformat()
    saved_data = load_data()

    if saved_data and saved_data.get("date") == today_str:
        return saved_data["category"], saved_data["quest"], False

    random_category = random.choice(list(QUEST_POOL.keys()))
    random_quest = random.choice(QUEST_POOL[random_category])