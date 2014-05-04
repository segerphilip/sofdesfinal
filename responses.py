personalities = {}
events = {}
text = []

# Jerk Event Responses

jerkEvents = {}
# Done Forging
jerkDoneForgeText = [
    "Yo cap, I finished your weapon", "I gotcha a new boomstick"]
jerkEvents.update({"Done Forging": jerkDoneForgeText})
jerkReturnWeaponText = ["Here's yo Gun Cap", "I MADE THIS GUN FOR YOU"]
jerkEvents.update({"Return Weapon": jerkReturnWeaponText})

# Done Foraging
jerkDoneForageText = ["Hey Brohms, I founds some berries",
                      "I brought back the berries I didn't already eat"]
jerkEvents.update({"Done Foraging": jerkDoneForageText})
jerkReturnFoodText = ["Damn, those berries were good, here's the left overs",
                      "Psssh here are the berries you asked for"]
jerkEvents.update({"Return Food": jerkReturnFoodText})
# Done Hunting
jerkDoneHuntText = [
    "Breh, I totally exploded some animals, I got some meat too",
    "I brought back some meat, god do I love killing shit"]
jerkEvents.update({"Done Hunting": jerkDoneHuntText})
jerkReturnMeatText = ["Here is that carcass you asked for",
                      "It's okay to be impressed with all this meat I brought back for you"]
jerkEvents.update({"Return Meat": jerkReturnMeatText})

# I'm hungry
jerkHungryText = ["I need all of our food", "The world can't lose me, feed me"]
jerkEvents.update({"Hungry": jerkHungryText})

# I'm sick
jerkSickText = ["Gee thanks cap, I'm sick. Stay away from me cuz karma's a bitch",
				"Hey cap, I'm sick. Ya better gimme some hot tea and TLC"]
jerkEvents.update({"Sick": jerkSickText})

personalities.update({"Jerk": jerkEvents})


