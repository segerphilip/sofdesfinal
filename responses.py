personalities = {}
events = {}
text = []

### Jerk Event Responses

jerkEvents = {}
#Done Forging
jerkDoneForgeText = ["Yo cap, I finished your weapon", "I gotcha a new boomstick"]
jerkEvents.update({"Done Forging": jerkDoneForgeText})
##Done Foraging
jerkDoneForageText = ["Hey Brohms, I founds some berries", "I brought back the berries I didn't already eat"]
jerkEvents.update({"Done Foraging": jerkDoneForageText})
##Done Hunting
jerkDoneHuntText = ["Breh, I totally exploded some animals, I got some meat too", "I brought back some meat, god do I love killing shit"]
jerkEvents.update({"Done Hunting": jerkDoneHuntText})
##I'm hungry
jerkHungryText = ["I need all of our food", "The world can't lose me, feed me"]
jerkEvents.update({"Hungry": jerkHungryText})

personalities.update({"Jerk":jerkEvents})