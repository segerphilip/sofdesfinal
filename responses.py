personalities = {}
events = {}
text = []

# Jerk Event Responses

jerkEvents = {}
# Done Forging
jerkDoneForgeText = [
    "Yo cap, I know you aren't used to having a sword longer than four inches, but here you go", "I gotcha a new boomstick"]
jerkEvents.update({"Done Forging": jerkDoneForgeText})
jerkReturnWeaponText = ["Here's yo Gun Cap", "I MADE THIS GUN FOR YOU"]
jerkEvents.update({"Return Weapon": jerkReturnWeaponText})
jerkCantForgeText = ["Cap I can't make a bitchen gun out of air", "Maybe if you had gotten some more resources"]
jerkEvents.update({"Can't Forge": jerkCantForgeText})

# Done Foraging #tookawhile #thanksbutnothanks #dikpix
jerkDoneForageText = ["Hey Brohms, I founds some berries",
                      "I brought back the berries I didn't already eat"]
jerkEvents.update({"Done Foraging": jerkDoneForageText})
jerkReturnFoodText = ["Dayum, those berries were good, here's the left overs",
                      "Psssh here are the berries you asked for"]
jerkEvents.update({"Return Food": jerkReturnFoodText})

# Done Hunting
jerkDoneHuntText = [
    "Breh, I totally exploded some animals, I got some meat too",
    "I brought back some meat, god do I love killing shit"
    "Bruh just got back from hunting, #killinit #winning #winnersneverquit #hatersgonnahatewinnersgonnawin"]
jerkEvents.update({"Done Hunting": jerkDoneHuntText})
jerkReturnMeatText = ["Here is that carcass you asked for",
                      "It's okay to be impressed with all this meat I brought back for you"]
jerkEvents.update({"Return Meat": jerkReturnMeatText})

# I'm hungry #sohungryrightnow #ilovefood #eatingflesh #yolo
jerkHungryText = ["I need all of our food", "The world can't lose me, feed me",
                  "Brah hit me up w/ some jerky my tummy's got the rumblies"]
jerkEvents.update({"Hungry": jerkHungryText})

# I'm sick
jerkSickText = ["Gee thanks cap, I'm sick. Stay away from me cuz karma's a bitch",
				"Hey cap, I'm sick. Ya better gimme some hot tea and TLC"]
jerkEvents.update({"Sick": jerkSickText})

# No Food
jerkNoFoodText = ["God how could you have no food for us? What kinda captain are you", "You ain't got no food"]
jerkEvents.update({"No Food": jerkNoFoodText})

# Thanks
jerkThanksText = ["About time you brought food", "Ah this tastes awful, but I'll take it"]
jerkEvents.update({"Thanks": jerkThanksText})

# Dead
jerkDeadText = ["I blame my death on you", "How could the world lose me?!"]
jerkEvents.update({"Dead": jerkDeadText})

personalities.update({"Jerk": jerkEvents})

# Sweet Heart Event Responses

sweetHeartEvents = {}
# Done Forging
sweetHeartDoneForgeText = ["Hey Captain, I finished your weapon!", "I worked hard but I made your new weapon"]
sweetHeartEvents.update({"Done Forging": sweetHeartDoneForgeText})
sweetHeartReturnWeaponText = ["I'd like to present your weapon oh captain, my captain", "Here is your new weapon"]
sweetHeartEvents.update({"Return Weapon": sweetHeartReturnWeaponText})
sweetHeartCantForgeText = ["Captain, we don't have enough resources to make a weapon", "You should go collect more resources Captain"]
sweetHeartEvents.update({"Can't Forge": sweetHeartCantForgeText})

# Done Foraging
sweetHeartDoneForageText = ["Captain I found us all the berries I could",
                      "I tried my best to get us all the food we will need"]
sweetHeartEvents.update({"Done Foraging": sweetHeartDoneForageText})
sweetHeartReturnFoodText = ["Here are the berries I collected for you","I'd like to give you all that I collected"]
sweetHeartEvents.update({"Return Food": sweetHeartReturnFoodText})

# Done Hunting
sweetHeartDoneHuntText = [
    "It was hard killing but I did it for the good of the group",
    "I just returned from hunting for us"]
sweetHeartEvents.update({"Done Hunting": sweetHeartDoneHuntText})
sweetHeartReturnMeatText = ["Here is the meat I collected for you",
                      "I give you the meat I hunted for us"]
sweetHeartEvents.update({"Return Meat": sweetHeartReturnMeatText})

# I'm hungry
sweetHeartHungryText = ["I know we all need food, but captain, I'm dying", "Please captain, feed me"]
sweetHeartEvents.update({"Hungry": sweetHeartHungryText})

# I'm sick
sweetHeartSickText = ["Captain, I'm sick stay away from me for all our good",
                "Hey cap, I'm sick. For the rest of the group, stay away from me!"]
sweetHeartNoFoodText = ["Looks like you don't have any food captain, but I believe in you", "You don't have any food on you, but thats okay"]
sweetHeartEvents.update({"No Food": sweetHeartNoFoodText})

# Thanks
sweetHeartThanksText = ["Thanks so much Captain", "Mmmmm thanks Captian, that was delectable"]
sweetHeartEvents.update({"Thanks": sweetHeartThanksText})

# Dead
sweetHeartDeadText = ["Good bye cruel world", "When they rescue us, tell my mother I loved her. Goodbye Captain"]
sweetHeartEvents.update({"Dead": sweetHeartDeadText})

personalities.update({"sweetHeart": sweetHeartEvents})

NerdEvents = {}
# Done Forging
NerdDoneForgeText = ["Through the material analysis and research I created this weapon for you!", "Science wins again! Come Here!"]
NerdEvents.update({"Done Forging": NerdDoneForgeText})
NerdReturnWeaponText = ["It is my honor to present to you this work of scientific art.", "Here is your new weapon"]
NerdEvents.update({"Return Weapon": NerdReturnWeaponText})
NerdCantForgeText = ["Captain, we don't have enough resources", "You need to leave the compound to collect more materials."]
NerdEvents.update({"Can't Forge": NerdCantForgeText})

# Done Foraging
NerdDoneForageText = ["Captain, my machine was able to collect berries",
                      "I probably was not the best person for this job, but I collected food."]
NerdEvents.update({"Done Foraging": NerdDoneForageText})
NerdReturnFoodText = ["Please use these to get more resources for my research!","Manage them wisely, here are some berries"]
NerdEvents.update({"Return Food": NerdReturnFoodText})

# Done Hunting
NerdDoneHuntText = [
    "My robot had a fun time killing, I might have allowed it too much emotion. Time to tinker.",
    "I don't understand why you had me hunt, but I'm done."]
NerdEvents.update({"Done Hunting": NerdDoneHuntText})
NerdReturnMeatText = ["Take this carcass from me please, its making me queezy",
                      "Meat is life, but you already knew that"]
NerdEvents.update({"Return Meat": NerdReturnMeatText})

# I'm hungry
NerdHungryText = ["Sir, my nutrient level isn't high enought.", "Captain, it seems as though I require nutrients"]
NerdEvents.update({"Hungry": NerdHungryText})

# I'm sick
NerdSickText = ["Capatin, I'm running diagnostics, and it looks like I'm coming down with something. I need to look into it more.",
                "I should but myself in quarentine, I don't know its effects"]
NerdNoFoodText = ["Captain look closer, you have nothing with you.", "Do you need help finding food? I have a robot for that."]
NerdEvents.update({"No Food": NerdNoFoodText})

# Thanks
NerdThanksText = ["You have my thanks, captain", "I will be able to return to my duties"]
NerdEvents.update({"Thanks": NerdThanksText})

# Dead
NerdDeadText = ["The ultimate research, the after world of death", "Swiftly life closes its door as the path clears to death."]
NerdEvents.update({"Dead": NerdDeadText})

personalities.update({"Nerd": NerdEvents})

FrenchEvents={}

FrenchDoneForgeText = ["Parfait, cette arme", "C'est mon chef d'oeuvre"]
FrenchEvents.update({"Done Forging": FrenchDoneForgeText})
FrenchReturnWeaponText= ["Ah! Ici, votre arme", "J'aime l'arme, elle te protegera"]
FrenchEvents.update({"Return Weapon": FrenchReturnWeaponText})
FrenchCantForgeText = ["Non, Je ne peux pas forger une arme", "Je suis desolee, Capitaine. Vous n'avez pas suffisamment de ressources"]
FrenchEvents.update ({"Can't Forge" : FrenchCantForgeText})

#Done Foraging
FrenchDoneForageText= ["Capitaine, Je fini. J'ai les nourritures.", "Que Maintenant?"]
FrenchEvents.update({"Done Foraging": FrenchDoneForageText})
FrenchReturnFoodText= ["Ici Capitaine.", " Emportes les nourriture"]
FrenchEvents.update({"Return Food": FrenchReturnFoodText})

#Done Hunting
FrenchDoneHuntText= [ " J'ai chasse.", "J'ai les nourritures"]
FrenchEvents.update({"Done Hunting": FrenchDoneHuntText})
FrenchReturnMeatText= ["Ici, la viande","Emportes la viande, plus vite." ]
FrenchEvents.update({"Return Meat": FrenchReturnMeatText})

# HUngry
FrenchHungryText= ["J'ai besoin de la nourriture", "J'ai faim"]
FrenchEvents.update({"Hungry": FrenchHungryText})

#I'm sickk

FrenchSickText= ["Capitaine, Je ne suis pas en forme", "Les jambes m'entrent dans le corps"]
FrenchNoFoodText= ["Tu n'as pas la nourriture", " Ou est la nourriture? Tu n'as rien"]
FrenchEvents.update({"No Food": FrenchNoFoodText})

#Thanks
FrenchThanksText= [" Merci Beaucoup, Capitaine", "Qu'est-ce que je ferais sans toi?"]
FrenchEvents.update({"Thanks": FrenchThanksText})

#GOODBYE
FrenchDeadText= ["Au Revoir Capitaine, je vous aime.", " Tu dois vivre sans moi!"]
FrenchEvents.update({"Dead": FrenchDeadText})

personalities.update({"French": FrenchEvents})

